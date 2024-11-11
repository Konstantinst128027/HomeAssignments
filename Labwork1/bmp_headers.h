/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#ifndef BMP_HEADERS_H
#define BMP_HEADERS_H


#pragma pack(push, 1)
struct BMPHeader
{
    uint16_t fileType;
    uint32_t fileSize;
    uint16_t reserved1;
    uint16_t reserved2;
    uint32_t offsetData;
};

struct DIBHeader
{
    uint32_t size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bitCount;
    uint32_t compression;
    uint32_t sizeImage;
    int32_t xPixelsPerMeter;
    int32_t yPixelsPerMeter;
    uint32_t colorsUsed;
    uint32_t colorsImportant;
};
#pragma pack(pop)
struct BMPColorHeader
{
    uint32_t red_mask; // the color of red mask
    uint32_t blue_mask; // the color of blue mask
    uint32_t green_mask; // the color of green mask
    uint32_t alpha_mask; // the alpha channel (transparency)
    uint32_t color_space_type; // the color space
    uint32_t unused[16]; // reserved data for sRGB color space (massive with 16 '0')
};


#endif
