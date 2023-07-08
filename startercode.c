/* Type your code here, or load an example. */
#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1)
typedef struct {
    unsigned char signature[2];
    unsigned int fileSize;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned int dataOffset;
} BitmapFileHeader;

typedef struct {
    unsigned int headerSize;
    int width;
    int height;
    unsigned short planes;
    unsigned short bitsPerPixel;
    unsigned int compression;
    unsigned int imageSize;
    int xPixelsPerMeter;
    int yPixelsPerMeter;
    unsigned int colorsUsed;
    unsigned int importantColors;
} BitmapInfoHeader;
#pragma pack(pop)

void rgbToCmyk(unsigned char red, unsigned char green, unsigned char blue,
               unsigned char *cyan, unsigned char *magenta, unsigned char *yellow, unsigned char *black) {
    double r = red / 255.0;
    double g = green / 255.0;
    double b = blue / 255.0;

    *black = (1 - fmax(fmax(r, g), b)) * 255;

    if (*black < 255) {
        *cyan = (unsigned char)((1 - r - *black / 255.0) * 255);
        *magenta = (unsigned char)((1 - g - *black / 255.0) * 255);
        *yellow = (unsigned char)((1 - b - *black / 255.0) * 255);
    } else {
        *cyan = 0;
        *magenta = 0;
        *yellow = 0;
    }
}

int main() {
    FILE *inputFile, *outputFile;
    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;
    unsigned char *imageData;
    unsigned char *outputData;
    int imageSize;
    int i, j;

    // Open input file
    inputFile = fopen("input.bmp", "rb");
    if (inputFile == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }

    // Read file and info headers
    fread(&fileHeader, sizeof(BitmapFileHeader), 1, inputFile);
    fread(&infoHeader, sizeof(BitmapInfoHeader), 1, inputFile);

    // Calculate image size and allocate memory
    imageSize = infoHeader.width * infoHeader.height * 3;
    imageData = (unsigned char *)malloc(imageSize);
    outputData = (unsigned char *)malloc(imageSize);

    // Read image data
    fseek(inputFile, fileHeader.dataOffset, SEEK_SET);
    fread(imageData, imageSize, 1, inputFile);

    // Perform RGB to CMYK conversion
    for (i = 0; i < infoHeader.height; i++) {
        for (j = 0; j < infoHeader.width; j++) {
            int index = (i * infoHeader.width + j) * 3;
            int outputIndex = (i * infoHeader.width + j) * 4;

            unsigned char red = imageData[index + 2];
            unsigned char green = imageData[index + 1];
            unsigned char blue = imageData[index];

            rgbToCmyk(red, green, blue, &outputData[outputIndex], &outputData[outputIndex + 1],
                       &outputData[outputIndex + 2], &outputData[outputIndex + 3]);
        }
    }

    // Create output file
    outputFile = fopen("output.bmp", "wb");
    if (outputFile == NULL) {
        printf("Failed to create output file.\n");
        return 1;
    }

    // Write file and info headers
    fwrite(&fileHeader, sizeof(BitmapFileHeader), 1, outputFile);
    fwrite(&infoHeader, sizeof(BitmapInfoHeader), 1, outputFile);

    // Write output image data
    fseek(outputFile, fileHeader.dataOffset, SEEK_SET);
    fwrite(outputData, imageSize, 1, outputFile);

    // Cleanup
    fclose(inputFile);
    fclose(outputFile);
    free(imageData);
    free(outputData);

    printf("Conversion complete.\n");

    return 0;
}