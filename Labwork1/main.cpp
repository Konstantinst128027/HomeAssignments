/* Berezkin Konstantin Evgenievich
./assignment4 st128027@student.spbu.ru*/
#include <iostream>
#include <fstream>
#include <vector>
#include "bmp_headers.h"
#include <cmath>
#include <cstdint>

int main()
{
    std::ifstream file("file.bmp", std::ios::binary);

    if (!file)
    {
        std::cerr << "Error opening file!" << std::endl;
        return -1;
    }

    BMPHeader bmpHeader;
    DIBHeader dibHeader;
    BMPColorHeader bmpcolorheader;
    file.read(reinterpret_cast<char*>(&bmpHeader), sizeof(BMPHeader));

    if (bmpHeader.fileType != 0x4D42)   // Проверка на "BM"
    {
        std::cout << "Unsupported file format!" << std::endl;
        return -1;
    }

    file.read(reinterpret_cast<char*>(&dibHeader), sizeof(DIBHeader));

    if (dibHeader.bitCount != 24)
    {
        std::cout << "The file is not a 24-bit image!" << std::endl;
        return -1;
    }

    file.read(reinterpret_cast<char*>(&bmpcolorheader), sizeof(BMPColorHeader));
    int width = dibHeader.width;
    int height = dibHeader.height;
    size_t headerSize = sizeof(BMPHeader) + sizeof(DIBHeader) + sizeof(BMPColorHeader);
    size_t rowSize = (width * 3 + ((4 - (width * 3) % 4) % 4));
    size_t pixelArraySize = rowSize * height;
    std::cout<<headerSize + pixelArraySize<<std::endl;


    std::vector<uint8_t>pixels(width * height * 3);

    file.seekg(bmpHeader.offsetData, std::ios::beg);

    for (int y = height - 1; y >= 0; --y)
    {
        for (int x = 0; x < width; ++x)
        {
            for (int c = 0; c<3; ++c)
                file.read(reinterpret_cast<char*>(&pixels[(y * width + x) * 3 + c]),1);
        }

        file.seekg((4 - (width * 3) % 4) % 4, std::ios::cur);
    }
    file.close();
    //turn 90 clockwise
    std::vector<uint8_t>rotatedclockpixels(height * width *3);

    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            for (int c = 0; c < 3; ++c)
            {
                rotatedclockpixels[(x * height + (height - y - 1)) * 3 + c] = pixels[(y * width + x) * 3 + c];
            }
        }
    }

    BMPHeader newbmpheader = bmpHeader;
    DIBHeader newdibheader = dibHeader;
    BMPColorHeader newbmpcolorheader = bmpcolorheader;

    newdibheader.width = dibHeader.height;
    newdibheader.height = dibHeader.width;

    std::ofstream outfile("rotated_clockwise.bmp", std::ios::binary);

    outfile.write(reinterpret_cast<char*>(&newbmpheader), sizeof(BMPHeader));
    outfile.write(reinterpret_cast<char*>(&newdibheader), sizeof(DIBHeader));
    outfile.write(reinterpret_cast<char*>(&newbmpcolorheader), sizeof(BMPColorHeader));

    for (int y = newdibheader.height - 1; y >= 0; --y)
    {
        for (int x = 0; x < newdibheader.width; ++x)
        {
            for (int c = 0; c < 3; ++c)
            {
                outfile.write(reinterpret_cast<char*>(&rotatedclockpixels[(y * width + x) * 3 + c]),1);
            }
        }
        int padding = (4 - (newdibheader.width * 3) % 4) % 4;

        if (padding > 0)
        {
            std::vector<uint8_t> pad(padding, 0);
            outfile.write(reinterpret_cast<char*>(pad.data()), padding);
        }
    }

    outfile.close();

    //turn 90 counterclockwise
    std::vector<uint8_t>rotatedcounterclockpixels(height * width *3);

    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            for (int c = 0; c < 3; ++c)
            {
                rotatedcounterclockpixels[((width - 1 - x) * height + y) * 3 + c] = pixels[(y * width + x) * 3 + c];
            }
        }
    }

    BMPHeader Newbmpheader = bmpHeader;
    DIBHeader Newdibheader = dibHeader;
    BMPColorHeader Newbmpcolorheader = bmpcolorheader;

    Newdibheader.width = dibHeader.height;
    Newdibheader.height = dibHeader.width;

    std::ofstream outFile("rotated_counterclockwise.bmp", std::ios::binary);

    outFile.write(reinterpret_cast<char*>(&Newbmpheader), sizeof(BMPHeader));
    outFile.write(reinterpret_cast<char*>(&Newdibheader), sizeof(DIBHeader));
    outFile.write(reinterpret_cast<char*>(&Newbmpcolorheader), sizeof(BMPColorHeader));

    for (int y = Newdibheader.height - 1; y >= 0; --y)
    {
        for (int x = 0; x < Newdibheader.width; ++x)
        {
            for (int c = 0; c < 3; ++c)
            {
                outFile.write(reinterpret_cast<char*>(&rotatedcounterclockpixels[(y * width + x) * 3 + c]),1);
            }
        }
        int Padding = (4 - (Newdibheader.width * 3) % 4) % 4;

        if (Padding > 0)
        {
            std::vector<uint8_t> Pad(Padding, 0);
            outFile.write(reinterpret_cast<char*>(Pad.data()), Padding);
        }
    }

    outFile.close();

    // Applying a Gaussian filter to a rotated image clockwise

    double sigma = 1.0;
    int kernelSize = 5;
    std::vector<std::vector<double>> kernel(kernelSize, std::vector<double>(kernelSize));
    double sum = 0.0;
    int halfKernel = kernelSize / 2;

    for (int x = -halfKernel; x <= halfKernel; ++x)
    {
        for (int y = -halfKernel; y <= halfKernel; ++y)
        {
            kernel[x+halfKernel][y+halfKernel] = (1.0 / (2*M_PI*sigma*sigma)) * exp(-(x*x+y*y)/(2*sigma*sigma));
            sum += kernel[x+halfKernel][y+halfKernel];
        }
    }

    for (int i=0; i<kernelSize; ++i)
    {
        for(int j=0; j<kernelSize; ++j)
        {
            kernel[i][j] /= sum;
        }
    }

    std::vector<uint8_t> blurredPixels(width*height*3);

    for(int y=0; y<newdibheader.height; ++y)
    {
        for(int x=0; x<newdibheader.width; ++x)
        {
            double blueSum=0.0;
            double greenSum=0.0;
            double redSum=0.0;

            for(int ky=-halfKernel; ky<=halfKernel; ++ky)
            {
                for(int kx=-halfKernel; kx<=halfKernel; ++kx)
                {
                    int pixelY=std::min(std::max(y+ky,0),height-1);
                    int pixelX=std::min(std::max(x+kx,0),width-1);

                    blueSum += rotatedclockpixels[(pixelY*newdibheader.width+pixelX)*3]*kernel[ky+halfKernel][kx+halfKernel];
                    greenSum += rotatedclockpixels[(pixelY*newdibheader.width+pixelX)*3+1]*kernel[ky+halfKernel][kx+halfKernel];
                    redSum += rotatedclockpixels[(pixelY*newdibheader.width+pixelX)*3+2]*kernel[ky+halfKernel][kx+halfKernel];
                }
            }

            blurredPixels[(y*newdibheader.width+x)*3] = static_cast<uint8_t>(blueSum);
            blurredPixels[(y*newdibheader.width+x)*3+1] = static_cast<uint8_t>(greenSum);
            blurredPixels[(y*newdibheader.width+x)*3+2] = static_cast<uint8_t>(redSum);
        }
    }

    std::ofstream outFileBlurred("blurred_image.bmp", std::ios::binary);

    outFileBlurred.write(reinterpret_cast<char*>(&bmpHeader), sizeof(BMPHeader));
    outFileBlurred.write(reinterpret_cast<char*>(&dibHeader), sizeof(DIBHeader));
    outFileBlurred.write(reinterpret_cast<char*>(&bmpcolorheader), sizeof(BMPColorHeader));

    for(int y=newdibheader.height-1; y>=0; --y)
    {
        for(int x=0; x<newdibheader.width; ++x)
        {
            for (int c = 0; c < 3; ++c)
            {
                outFileBlurred.write(reinterpret_cast<char*>(&blurredPixels[(y*newdibheader.width+x)*3 + c]),1);
            }
        }

        int _padding=(4-(newdibheader.width*3)%4)%4;

        if(_padding>0)
        {
            std::vector<uint8_t> _pad(_padding,0);
            outFileBlurred.write(reinterpret_cast<char*>(_pad.data()),_padding);
        }
    }

    outFileBlurred.close();
    return 0;
}
