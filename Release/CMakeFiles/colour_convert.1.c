#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#pragma pack(1)

typedef struct {
    uint16_t type;
    uint32_t size;
    uint16_t reserved1;
    uint16_t reserved2;
    uint32_t offset;
} BMPHeader;

typedef struct {
    uint32_t header_size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bit_count;
    uint32_t compression;
    uint32_t image_size;
    int32_t x_pixels_per_meter;
    int32_t y_pixels_per_meter;
    uint32_t colors_used;
    uint32_t colors_important;
} BMPInfoHeader;

typedef struct {
    uint8_t b;
    uint8_t g;
    uint8_t r;
} RGBPixel;

typedef struct {
    uint8_t y;
    uint8_t cb;
    uint8_t cr;
} YCbCrPixel;

// Function to convert RGB pixel to Y'CbCr pixel
YCbCrPixel rgb_to_ycc(RGBPixel rgb) {
    YCbCrPixel ycc;

    // Convert RGB to Y'CbCr
    ycc.y = (uint8_t)round(0.299 * rgb.r + 0.587 * rgb.g + 0.114 * rgb.b);
    ycc.cb = (uint8_t)round(128 + 0.564 * (rgb.b - ycc.y));
    ycc.cr = (uint8_t)round(128 + 0.713 * (rgb.r - ycc.y));

    return ycc;
}

int main() {
    FILE* input_file = fopen("input.bmp", "rb");
    if (!input_file) {
        printf("Error: Could not open input.bmp\n");
        return 1;
    }

    FILE* output_file = fopen("output.bmp", "wb");
    if (!output_file) {
        printf("Error: Could not open output.bmp\n");
        fclose(input_file);
        return 1;
    }

    BMPHeader header;
    BMPInfoHeader info_header;

    // Read the BMP headers
    fread(&header, sizeof(BMPHeader), 1, input_file);
    fread(&info_header, sizeof(BMPInfoHeader), 1, input_file);

    // Check if the file is BMP format
    if (header.type != 0x4D42) {
        printf("Error: The input file is not in BMP format.\n");
        fclose(input_file);
        fclose(output_file);
        return 1;
    }

    // Check if the BMP uses 24-bit RGB format
    if (info_header.bit_count != 24) {
        printf("Error: Only 24-bit RGB BMP images are supported.\n");
        fclose(input_file);
        fclose(output_file);
        return 1;
    }

    // Allocate memory for pixel data
    int width = info_header.width;
    int height = info_header.height;
    RGBPixel** image_rgb = (RGBPixel**)malloc(height * sizeof(RGBPixel*));
    for (int i = 0; i < height; i++) {
        image_rgb[i] = (RGBPixel*)malloc(width * sizeof(RGBPixel));
    }

    // Read the pixel data from the BMP file
    for (int y = height - 1; y >= 0; y--) {
        for (int x = 0; x < width; x++) {
            fread(&image_rgb[y][x], sizeof(RGBPixel), 1, input_file);
        }
    }

    // Create a 2D array for the Y'CbCr image
    YCbCrPixel** image_ycc = (YCbCrPixel**)malloc(height * sizeof(YCbCrPixel*));
    for (int i = 0; i < height; i++) {
        image_ycc[i] = (YCbCrPixel*)malloc(width * sizeof(YCbCrPixel));
    }

    // Convert RGB image to Y'CbCr
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            image_ycc[y][x] = rgb_to_ycc(image_rgb[y][x]);
        }
    }

    // Write the BMP headers to the output file
    fwrite(&header, sizeof(BMPHeader), 1, output_file);
    fwrite(&info_header, sizeof(BMPInfoHeader), 1, output_file);

    // Write the Y'CbCr pixel data to the output file
    for (int y = height - 1; y >= 0; y--) {
        for (int x = 0; x < width; x++) {
            fwrite(&image_ycc[y][x], sizeof(YCbCrPixel), 1, output_file);
        }
    }

    // Free memory and close files
    for (int i = 0; i < height; i++) {
        free(image_rgb[i]);
        free(image_ycc[i]);
    }
    free(image_rgb);
    free(image_ycc);

    fclose(input_file);
    fclose(output_file);

    return 0;
}