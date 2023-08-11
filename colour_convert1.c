
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>

typedef uint32_t DWORD;   // DWORD = unsigned 32 bit value
typedef uint16_t WORD;    // WORD = unsigned 16 bit value
typedef uint8_t BYTE;    // BYTE = unsigned 8 bit value

#define K 8

//#include "pico/stdlib.h"
//#include "pico/float.h"


// #pragma pack(push, 1)
// typedef struct {
//     unsigned char signature[2];
//     unsigned int fileSize;
//     unsigned short reserved1;
//     unsigned short reserved2;
//     unsigned int dataOffset;
// } BitmapFileHeader;
// #pragma pack(pop)

#pragma pack(push, 1)

typedef struct tagBITMAPFILEHEADER
{
    WORD bfType;  //specifies the file type
    DWORD bfSize;  //specifies the size in bytes of the bitmap file
    WORD bfReserved1;  //reserved; must be 0
    WORD bfReserved2;  //reserved; must be 0
    DWORD bfOffBits;  //specifies the offset in bytes from the bitmapfileheader to the bitmap bits
}BITMAPFILEHEADER;

#pragma pack(pop)

#pragma pack(push, 1)

typedef struct tagBITMAPINFOHEADER
{
    DWORD biSize;  //specifies the number of bytes required by the struct
    uint32_t biWidth;  //specifies width in pixels
    uint32_t biHeight;  //specifies height in pixels
    WORD biPlanes;  //specifies the number of color planes, must be 1
    WORD biBitCount;  //specifies the number of bits per pixel
    DWORD biCompression;  //specifies the type of compression
    DWORD biSizeImage;  //size of image in bytes
    uint32_t biXPelsPerMeter;  //number of pixels per meter in x axis
    uint32_t biYPelsPerMeter;  //number of pixels per meter in y axis
    DWORD biClrUsed;  //number of colors used by the bitmap
    DWORD biClrImportant;  //number of colors that are important
}BITMAPINFOHEADER;

#pragma pack(pop)


uint16_t rgb_clamp(int x)
{

    // // Clamp the RGB values to 0-255 range
    uint16_t r = (x < 0) ? 0 : (x >255) ? 255 : (uint16_t) x;

    return r;
}

BYTE y_clamp(uint8_t x)
{
    // // Clamp the RGB values to 0-255 range
    WORD r = (x < 16) ? 16 : (x > 255) ? 235 : (WORD) x;

    return r;
}

BYTE c_clamp(uint8_t x)
{
    // // Clamp the RGB values to 0-255 range
    WORD r = (x < 16) ? 16 : (x > 255) ? 240 : x;

    return r;
}


void rgbToCmyk(BYTE redtl, BYTE greentl, BYTE bluetl, BYTE redtr, BYTE greentr, BYTE bluetr, BYTE redbl, BYTE greenbl, BYTE bluebl, BYTE redbr, BYTE greenbr, BYTE bluebr, unsigned char *Ytl,  unsigned char *Ytr,  unsigned char *Ybl,  unsigned char *Ybr, unsigned char *CB, unsigned char *CR) {

    // YCC_pixel *YCC = malloc(sizeof(YCC_pixel));

    // int R = red; /// 255.0;
    // int G = green; /// 255.0;
    // int B = blue; /// 255.0;
    int Rtl = (int) redtl;
    int Gtl = (int) greentl;
    int Btl = (int) bluetl;
    int Rtr = (int) redtr;
    int Gtr = (int) greentr;
    int Btr = (int) bluetr;
    int Rbl = (int) redbl;
    int Gbl = (int) greenbl;
    int Bbl = (int) bluebl;
    int Rbr = (int) redbr;
    int Gbr = (int) greenbr;
    int Bbr = (int) bluebr;

    int y_tl = (16 << K) + (66 * Rtl) + (129 * Gtl) + (25 * Btl);
    int y_tr = (16 << K) + (66 * Rtr) + (129 * Gtr) + (25 * Btr);
    int y_bl = ((16 << K) + (66 * Rbl) + (129 *  Gbl) + (25 *  Bbl));
    int y_br = ((16 << K) + (66 * Rbr) + (129 *  Gbr) + (25 *  Bbr));

    int cb_tl = (128 << K) - (38 * Rtl) - (74 * Gtl) + (112 * Btl);
    int cr_tl = (128 << K) + (112 * Rtl) - (94 * Gtl) - (18 * Btl);

    int cb_tr = (128 << K) - (38 * Rtr) - (74 * Gtr) + (112 *  Btr);
    int cr_tr = (128 << K) + (112 * Rtr) - (94 * Gtr) - (18 *  Btr);

    int cb_bl = (128 << K) - (38 * Rbl) - (74 *  Gbl) + (112 * Bbl);
    int cr_bl = (128 << K) + (112 * Rbl) - (94 *  Gbl) - (18 * Bbl);

    int cb_br = (128 << K) - (38 * Rbr) - (74 *  Gbr) + (112 * Bbr);
    int cr_br = (128 << K) + (112 * Rbr) - (94 *  Gbr) - (18 * Bbr);


    // R =  (DWORD)(16.0 + 0.257 * (DWORD) R + 0.504 * (DWORD) G + 0.098 * (DWORD) B);
    // G =  (DWORD)(128 - 0.148 * (DWORD) R - 0.291 * (DWORD) G + 0.439 * (DWORD) B);
    // B =  (DWORD)(128 + 0.439 * (DWORD) R - 0.368 * (DWORD) G - 0.071 * (DWORD) B);

    // Calculate Average
    int cba = (int)((cb_tl + cb_tr + cb_bl + cb_br) >> 2);
    int cra = (int)((cr_tl + cr_tr + cr_bl + cr_br) >> 2);



    *Ytl = (uint8_t)((y_tl + (1 << (K-1))) >> K);
    *Ytr = (uint8_t)((y_tr + (1 << (K-1))) >> K);
    *Ybl = (uint8_t)((y_bl + (1 << (K-1))) >> K);
    *Ybr = (uint8_t)((y_br + (1 << (K-1))) >> K);

    *CB = (uint8_t)((cba + (1 << (K-1))) >> K);
    *CR = (uint8_t)((cra + (1 << (K-1))) >> K);

    // // // Clamp the values to xxx-255 range
    // BYTE Rb = (R < 16) ? 16 : (R > 255) ? 235 : (BYTE)R;
    // BYTE Gb = (G < 16) ? 16 : (B > 255) ? 240 : (BYTE)B;
    // BYTE Bb = (B < 16) ? 16 : (G > 255) ? 240 : (BYTE)G;

    // Y = &Rb;
    // CB = &Gb;
    // CR = &Bb;

    // *Y = Rb;
    // *CB = Gb;
    // *CR = Bb;
    // return YCC
}


void YCbCrTorgb(unsigned char Ytl, unsigned char Ytr, unsigned char Ybl, unsigned char Ybr, unsigned char CB, unsigned char CR, unsigned char *red, unsigned char *green, unsigned char *blue,unsigned char *red1, unsigned char *green1, unsigned char *blue1,unsigned char *red2, unsigned char *green2, unsigned char *blue2,unsigned char *red3, unsigned char *green3, unsigned char *blue3) {

    // float Yf = Y; /// 255.0;
    // float CBf = CB; /// 255.0;
    // float CRf = CR; /// 255.0;
    WORD Yf = (WORD) Ytl;
    WORD CBf = (WORD) CB;
    WORD CRf = (WORD) CR;

    // Convert YCbCr to RGB

    int r = rgb_clamp((74 * (int)( Yf - 16)) + (102 * (int)( CRf - 128)));
    int g = rgb_clamp((74 * (int)( Yf - 16)) - (52 * (int)( CRf - 128))) - (25 * (int)( CBf - 128));
    int b = rgb_clamp((74 * (int)( Yf - 16)) + (129 * (int)( CBf - 128)));

    Yf = (WORD) Ytr;
    int r1 = rgb_clamp((74 * (int)( Yf - 16)) + (102 * (int)( CRf - 128)));
    int g1 = rgb_clamp((74 * (int)( Yf - 16)) - (52 * (int)( CRf - 128)) - (25 * (int)( CBf - 128)));
    int b1 = rgb_clamp((74 * (int)( Yf - 16)) + (129 * (int)( CBf - 128)));


    Yf = (WORD) Ybl;
    int r2 = rgb_clamp((74 * (int)( Yf - 16)) + (102 * (int)( CRf - 128)));
    int g2 = rgb_clamp((74 * (int)( Yf - 16)) - (52 * (int)( CRf - 128)) - (25 * (int)( CBf - 128)));
    int b2 = rgb_clamp((74 * (int)( Yf - 16)) + (129 * (int)( CBf - 128)));

    Yf = (WORD) Ybr;
    int r3 = rgb_clamp((74 * (int)( Yf - 16)) + (102 * (int)( CRf - 128)));
    int g3 = rgb_clamp((74 * (int)( Yf - 16)) - (52 * (int)( CRf - 128)) - (25 * (int)( CBf - 128)));
    int b3 = rgb_clamp((74 * (int)( Yf - 16)) + (129 * (int)( CBf - 128)));

    *red = (BYTE) ((r + (1 << (K-1))) >> K);
    *green = (BYTE) ((g + (1 << (K-1))) >> K);
    *blue = (BYTE) ((b + (1 << (K-1))) >> K);

    *red1 = (BYTE) (((r1 + (1 << (K-1))) >> K));
    *green1 = (BYTE) ((g1 + (1 << (K-1))) >> K);
    *blue1 = (BYTE) ((b1 + (1 << (K-1))) >> K);

    *red2 = (BYTE) ((r2 + (1 << (K-1))) >> K);
    *green2 = (BYTE) ((g2 + (1 << (K-1))) >> K);
    *blue2 = (BYTE) ((b2 + (1 << (K-1))) >> K);

    *red3 = (BYTE) ((r3 + (1 << (K-1))) >> K);
    *green3 = (BYTE) ((g3 + (1 << (K-1))) >> K);
    *blue3 = (BYTE) ((b3 + (1 << (K-1))) >> K);
    // *red = red1
    // *green = green1;
    // *blue = blue1;

    // *red = std::clamp(Yf, 0, UINT8_MAX);
    // *green = std::clamp(CBf, 0, UINT8_MAX);
    // *blue = std::clamp(CRf, 0, UINT8_MAX);
    // printf("%d", r);
    // printf("%d", g);
    // printf("%d", b);


    // *red = r;
    // *green = g;
    // *blue = b;

    // *red = r;
    // *green = g;
    // *blue = b;
}

unsigned char *LoadBitmapFile(FILE *filePtr, BITMAPINFOHEADER *bitmapInfoHeader, BITMAPFILEHEADER *bitmapFileHeader)
{
    // FILE *filePtr;  //our file pointer
    // BITMAPFILEHEADER bitmapFileHeader;  //our bitmap file header
    unsigned char *bitmapImage;  //store image data
    // unsigned char *bitmapImageOut;
    uint32_t imageIdx=0;  //image index counter
    WORD tempRGB;  //our swap variable

    // //open file in read binary mode
    // filePtr = fopen(filename,"rb");
    // if (filePtr == NULL)
    //     return NULL;

    //read the bitmap file header
    fread(bitmapFileHeader, sizeof(BITMAPFILEHEADER),1,filePtr);


    //verify that this is a .BMP file by checking bitmap id
    if (bitmapFileHeader->bfType !=0x4D42)
    {
        fclose(filePtr);
        return NULL;
    }

    //read the bitmap info header
    fread(bitmapInfoHeader, sizeof(BITMAPINFOHEADER),1,filePtr);

    // Check if the BMP uses 24-bit RGB format
    if (bitmapInfoHeader->biBitCount != 24) {
        printf("Error: Only 24-bit RGB BMP images are supported.\n");
        fclose(filePtr);
        // fclose(output_file);
        return NULL;
    }


    //move file pointer to the beginning of bitmap data
    fseek(filePtr, bitmapFileHeader->bfOffBits, SEEK_SET);
    // fseek(filePtr, bitmapFileHeaderOut->bfOffBits, SEEK_SET);

    //allocate enough memory for the bitmap image data
    // printf("size: %zu\n",bitmapInfoHeader->biSizeImage);
    bitmapImage = (unsigned char*)malloc(bitmapInfoHeader->biSizeImage);
    // printf("size: %zu\n",sizeof(bitmapImage));
    // bitmapImageOut = (unsigned char*)malloc(bitmapInfoHeader->biSizeImage);
    //verify memory allocation
    if (!bitmapImage)
    {
        free(bitmapImage);
        fclose(filePtr);
        return NULL;
    }

    //read in the bitmap image data
    fread(bitmapImage,bitmapInfoHeader->biSizeImage,1,filePtr);

    //make sure bitmap image data was read
    if (bitmapImage == NULL)
    {
        fclose(filePtr);
        return NULL;
    }


    return bitmapImage;
}



int main() {

    BITMAPINFOHEADER bitmapInfoHeader;
    BITMAPFILEHEADER bitmapFileHeader;
    unsigned char *bitmapData;
    FILE *inputFile, *outputFile;
    // BitmapFileHeader fileHeader;
    // BitmapInfoHeader infoHeader;
    unsigned char *imageData;
    unsigned char *outputData;
    DWORD newImageSize;
    uint32_t index, index2, outputIndex,outputIndex2, i, j;


    // Open input file
    inputFile = fopen("../input.bmp", "rb");
    if (inputFile == NULL) {
        printf("Failed to open input file.\n");

        return 1;
    }

    bitmapData = LoadBitmapFile(inputFile,&bitmapInfoHeader,&bitmapFileHeader);

    uint32_t width = bitmapInfoHeader.biWidth;
    uint32_t height = bitmapInfoHeader.biHeight;

    newImageSize = (width*height*6); //6pix
    // printf("size: %d\n",newImageSize);

    // outputData = (unsigned char*)malloc(bitmapInfoHeader.biSizeImage);
    outputData = (unsigned char*)malloc(newImageSize);
    imageData = (unsigned char*)malloc(bitmapInfoHeader.biSizeImage);
    // printf("biHeight: %d\n",height);
    // printf("biWidth: %d\n",width);
    // printf("size: %lu\n",&bitmapData);
    // printf("size: %lu\n",sizeof(outputData));
    // printf("size: %lu\n",bitmapInfoHeader.biSizeImage);



    FILE* ppm_file = fopen("../output_YCC_int.ppm", "wb");
    if (!ppm_file) {
        printf("Error: Could not create ppm");
        fclose(ppm_file);
        return 1;
    }
    // const BYTE *string_write = ("P6\n%d %d\n%d\n", width, height, 255);
    // Write the PPM header
    fseek(ppm_file, 0, SEEK_SET);
    fprintf(ppm_file,"P6\n%u %u\n%d\n",width, height, 255);
    // fprintf(ppm_file, "P6\n%d %d\n%d\n", width, height, 255);
    // fseek(outputFile, bitmapFileHeader.bfOffBits, SEEK_SET);
    //Perform RGB to YCC conversion
    // for (i = bitmapInfoHeader.biHeight -2; i >= 0 ; i -=2) {
    for (i = 0; i < bitmapInfoHeader.biHeight -2 ; i += 2) {
        for (j = 0; j < bitmapInfoHeader.biWidth -2; j += 2) {
            index = (i * bitmapInfoHeader.biWidth + j) * (3); //3x2 pixels worth
            index2 = ((i+1) * bitmapInfoHeader.biWidth + j) * (3); //3x2 pixels worth
            outputIndex = (i * bitmapInfoHeader.biWidth + j) * 6; //2 * index;//
            // outputIndex2 = (i * bitmapInfoHeader.biWidth + j) * 6;

            // printf("lo;\n");

            unsigned char redtl =  bitmapData[index];
            unsigned char greentl = bitmapData[index + 1];
            unsigned char bluetl = bitmapData[index + 2];

            unsigned char redtr =  bitmapData[index + 3];
            unsigned char greentr = bitmapData[index + 4];
            unsigned char bluetr = bitmapData[index + 5];

            unsigned char redbl =  bitmapData[index2];
            unsigned char greenbl = bitmapData[index2 + 1];
            unsigned char bluebl = bitmapData[index2 + 2];

            unsigned char redbr =  bitmapData[index2 + 3];
            unsigned char greenbr = bitmapData[index2 + 4];
            unsigned char bluebr = bitmapData[index2 + 5];


            // printf("2;\n");
            rgbToCmyk(redtl, greentl, bluetl, redtr, greentr, bluetr, redbl, greenbl, bluebl, redbr, greenbr, bluebr, &outputData[outputIndex], &outputData[outputIndex + 1], &outputData[outputIndex + 2],&outputData[outputIndex + 3],&outputData[outputIndex + 4],&outputData[outputIndex + 5]);
            // printf("3;\n");

            imageData[index] = outputData[outputIndex];
            imageData[index + 1] = outputData[outputIndex + 4];
            imageData[index + 2] = outputData[outputIndex + 5];

            imageData[index + 3] = outputData[outputIndex + 1];
            imageData[index + 4] = outputData[outputIndex + 4];
            imageData[index + 5] = outputData[outputIndex + 5];

            imageData[index2] = outputData[outputIndex + 2];
            imageData[index2 + 1] = outputData[outputIndex + 4];
            imageData[index2 + 2] = outputData[outputIndex + 5];


            imageData[index2 + 3] = outputData[outputIndex + 3];
            imageData[index2 + 4] = outputData[outputIndex + 4];
            imageData[index2 + 5] = outputData[outputIndex + 5];


            // // // // Write the YCC pixel to the PPM file
            // fwrite(&outputData[outputIndex], sizeof(BYTE), 1, ppm_file); //(outputData[outputIndex], ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fwrite(&outputData[outputIndex + 1], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fseek(ppm_file, 3*height, SEEK_CUR);

            // fwrite(&outputData[outputIndex + 2], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fwrite(&outputData[outputIndex + 3], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fseek(ppm_file, -3*height, SEEK_CUR); //-sizeof(BYTE)*((i+1)*height);
            // fseek(fInput, -sizeof(rgb_pixel) * width, SEEK_CUR);

            // printf("ok");
            }

    }
    printf("ok");
    fwrite(imageData, bitmapInfoHeader.biSizeImage, 1, ppm_file);


    // // RGBtoYCC(bitmapData, outputData, bitmapInfoHeader.biWidth, bitmapInfoHeader.biHeight);
    // // Create output file
    // outputFile = fopen("../output.bmp", "wb");
    // if (outputFile == NULL) {
    //     printf("Failed to create output file.\n");
    //     return 1;
    // }

    // Write file and info headers
    // fwrite(&bitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, outputFile);
    // fwrite(&bitmapInfoHeader, sizeof(BITMAPINFOHEADER), 1, outputFile);

    // // Write output image data
    // fseek(outputFile, bitmapFileHeader.bfOffBits, SEEK_SET);
    // fwrite(outputData, bitmapInfoHeader.biSizeImage, 1, outputFile);

    // Cleanup
    fclose(ppm_file);
    // fclose(inputFile);
    // fclose(outputFile);
    // free(bitmapData);
    // free(outputData);

    printf("Conversion to YCBCR complete.\n");

    /* ------------------------------------------------------------------ */
    FILE *inputFile2;
    unsigned char *new_output_data;

    // Open input file
    inputFile2 = fopen("../output_YCC.ppm", "rb");
    if (inputFile2 == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }

    // inputFile2 = fopen("../input.bmp", "rb");
    // if (inputFile == NULL) {
    //     printf("Failed to open input file.\n");
    //     return 1;
    // }

    // bitmapData = LoadBitmapFile(inputFile2,&bitmapInfoHeader,&bitmapFileHeader);

    // width = bitmapInfoHeader.biWidth;
    // height = bitmapInfoHeader.biHeight;
    // free(bitmapData);
    // bitmapData = (unsigned char*)malloc(sizeof(newImageSize));
    // outputData = (unsigned char*)malloc(sizeof(newImageSize));


    // bitmapData = (unsigned char*)malloc(newImageSize);
    // outputData = (unsigned char*)malloc(newImageSize);
    // outputData = (unsigned char*)malloc(height * width * 3);


    // printf("biHeight: %d\n",height);
    // printf("biWidth: %d\n",width);
    // printf("size: %lu\n",bitmapInfoHeader.biSizeImage);
    // char id[3] = {0, 0, 0};
    // long vals[5];
    // int count = 0; /* # of vals so far */
    // char *buf = malloc(256);

    // fgets(buf, 256, inputFile);
    // id[0] = buf[0];
    // id[1] = buf[1];
    // count = sscanf(buf + 2, "%d %d %d",
    // &vals[0], &vals[1], &vals[2]);
    // printf("Got %d vals \n", count);
    // printf("%4d %4d %4d \n", vals[0], vals[1], vals[2]);

    // printf("color: %d\n",vals[2]);

    // Read and validate the PPM header

    new_output_data = (unsigned char*)malloc(height*width*3);

    char magic_number[3];
    fscanf(inputFile2, "%2s", magic_number);
    // fscanf(inputFile, "%s",magic_number);
    printf("mm1: %2s \n", magic_number);
    // printf("mm2: %s\n",(char) magic_number[1]);
    if (magic_number[0] != 'P' || magic_number[1] != '6') {
        printf("Error: magicnum not a valid PPM file.\n");
        fclose(inputFile2);
        return 1;
    }

    int max_colour;
    int wid;
    int ht;
    fscanf(inputFile2, "%d %d %d", &wid, &ht, &max_colour);
    fgetc(inputFile2); // Consume newline character

    printf("color: %d \n",max_colour);

    printf("biHeight: %d \n",ht);
    printf("biWidth: %d \n",wid);
    // Check if the PPM uses 8-bit per color channel
    if ((int)max_colour != 255) {
        printf("Error: Only PPM files with 8-bit color depth are supported.\n");
        fclose(inputFile2);
        return 1;
    }
    printf("currpos: %d \n",(int)ftell(inputFile2));
    int header_size = ftell(inputFile2);
    fseek(inputFile2, ftell(inputFile2), SEEK_SET);
    fread(new_output_data,1,width * height *3,inputFile2);

    outputFile = fopen("../RGB_Output_int.bmp", "wb");
    if (outputFile == NULL) {
        printf("Failed to create output file.\n");
        return 1;
    }
// v
    //Perform YCC to RGB conversion
    for (i = 0; i < height -2 ; i += 2) {
    // for (i = height -2; i >= 1 ; i -=2) {
        for (j = 0; j+2 < width; j+=2) {
            index = (i * width + j) * 6;
            outputIndex = (i *width + j) * 3;
            outputIndex2 = ((i+1) *width + j) * 3;


                // BYTE Ytl  =  outputData[index];
                // BYTE Ytr  =  outputData[index -1];
                // BYTE Ybl  =  outputData[index -2];
                // BYTE Ybr  =  outputData[index -3];
                // BYTE CB = outputData[index -4];
                // BYTE CR = outputData[index -5];
                // BYTE Ytl  =  outputData[index];
                // BYTE Ytr  =  outputData[index +1];
                // BYTE Ybl  =  outputData[index +2];
                // BYTE Ybr  =  outputData[index +3];
                // BYTE CB = outputData[index +4];
                // BYTE CR = outputData[index +5];
                // BYTE Ytl  =  outputData[index-5];
                // BYTE Ytr  =  outputData[index -4];
                // BYTE Ybl  =  outputData[index -3];
                // BYTE Ybr  =  outputData[index -2];
                // BYTE CB = outputData[index -1];
                // BYTE CR = outputData[index ];

                // BYTE Ytl  =  imageData[outputIndex -5];
                // BYTE Ytr  =  imageData[outputIndex -4];
                // BYTE Ybl  =  imageData[outputIndex -3];
                // BYTE Ybr  =  imageData[outputIndex -2];
                // BYTE CB = imageData[outputIndex -1];
                // BYTE CR = imageData[outputIndex ];

                // BYTE Ytl  =  imageData[outputIndex ];
                // BYTE Ytr  =  imageData[outputIndex -1];
                // BYTE Ybl  =  imageData[outputIndex -2];
                // BYTE Ybr  =  imageData[outputIndex -3];
                // BYTE CB = imageData[outputIndex -4];
                // BYTE CR = imageData[outputIndex -5];
                BYTE Ytl  =  imageData[outputIndex ];
                BYTE Ytr  =  imageData[outputIndex +3];
                BYTE Ybl  =  imageData[outputIndex2 ];
                BYTE Ybr  =  imageData[outputIndex +3];
                BYTE CB = imageData[outputIndex +1];
                BYTE CR = imageData[outputIndex +2];


                // unsigned char Y =  fgetc(inputFile);
                // unsigned char CR = fgetc(inputFile);
                // unsigned char CB = fgetc(inputFile);


                YCbCrTorgb(Ytl,Ytr,Ybl,Ybr, CB, CR, &new_output_data[outputIndex], &new_output_data[outputIndex + 1], &new_output_data[outputIndex + 2], &new_output_data[outputIndex + 3], &new_output_data[outputIndex + 4], &new_output_data[outputIndex + 5], &new_output_data[outputIndex2], &new_output_data[outputIndex2 + 1], &new_output_data[outputIndex2 + 2], &new_output_data[outputIndex2 + 3], &new_output_data[outputIndex2 + 4], &new_output_data[outputIndex2 + 5]);

                // fwrite(outputData[outputIndex + 1], sizeof(BYTE), 1, output);
                // fwrite(outputData[outputIndex + 4], sizeof(BYTE), 1, output);
                // fwrite(outputData[outputIndex + 5], sizeof(BYTE), 1, output);

                // fseek(output, height, SEEK_CUR);

            }
    }

    // RGBtoYCC(bitmapData, outputData, bitmapInfoHeader.biWidth, bitmapInfoHeader.biHeight);
    // Create output file
    // uint32_t tempRGB=0;
    // int imageIdx;
    // // swap the R and B values to get RGB (bitmap is BGR)
    // for (int imageIdx = 0;imageIdx < height*width*3;imageIdx+=3){
    //     // printf("star\n");
    //     tempRGB = new_output_data[imageIdx];
    //     new_output_data[imageIdx] = new_output_data[imageIdx + 2];
    //     new_output_data[imageIdx + 2] = tempRGB;
    //     // printf("temprgb: %d\n", tempRGB);
    // }


    // Write file and info headers
    fseek(outputFile, 0, SEEK_SET);
    fwrite(&bitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, outputFile);
    fwrite(&bitmapInfoHeader, sizeof(BITMAPINFOHEADER), 1, outputFile);

    // Write output image data
    fseek(outputFile, bitmapFileHeader.bfOffBits, SEEK_SET);
    fwrite(new_output_data, width*height*3, 1, outputFile);

    // Cleanup
    fclose(inputFile);
    fclose(inputFile2);
    fclose(outputFile);
    free(bitmapData);
    free(outputData);
    free(new_output_data);
    free(imageData);

    printf("Conversion to RGB complete.\n");




    return 0;
}