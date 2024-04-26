#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0;i<height;i++)
    {for(int j=0;j<width;j++)
     {long ave=image[i][j].rgbtRed+image[i][j].rgbtGreen+image[i][j].rgbtBlue;
     image[i][j].rgbtRed=round(1.0*ave/3);
     image[i][j].rgbtGreen=round(1.0*ave/3);
     image[i][j].rgbtBlue=round(1.0*ave/3);
       }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0;i<height;i++)
    {for(int j=0;j<width/2;j++)// /2
     { RGBTRIPLE a;
    a.rgbtBlue=image[i][width-1-j].rgbtBlue;
    image[i][width-1-j].rgbtBlue=image[i][j].rgbtBlue;
    image[i][j].rgbtBlue=a.rgbtBlue;

      a.rgbtGreen=image[i][width-1-j].rgbtGreen;
    image[i][width-1-j].rgbtGreen=image[i][j].rgbtGreen;
    image[i][j].rgbtGreen=a.rgbtGreen;

     a.rgbtRed=image[i][width-1-j].rgbtRed;
    image[i][width-1-j].rgbtRed=image[i][j].rgbtRed;
    image[i][j].rgbtRed=a.rgbtRed;


       }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{   // create a temporary array
     RGBTRIPLE temp[height][width];
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            temp[i][j].rgbtRed=image[i][j].rgbtRed;
            temp[i][j].rgbtGreen=image[i][j].rgbtGreen;
            temp[i][j].rgbtBlue=image[i][j].rgbtBlue;
        }
    }
    // loop throgh the neighbor pixel
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {    float totalred=0;
             float totalgreen=0;
             float totalblue=0;
             int count;
            for(int x=-1;x<2;x++)
            {
                for(int y=-1;y<2;y++)
                {
                    long currentx=i+x;
                    long currenty=j+y;
                    if(currentx<0||currenty<0||currentx>height-1||currenty>width-1){continue;}
                    else
                    {   count++;
                        totalred+=temp[currentx][currenty].rgbtRed;
                        totalblue+=temp[currentx][currenty].rgbtBlue;
                        totalgreen+=temp[currentx][currenty].rgbtGreen;
                    }
                }
            }
            image[i][j].rgbtRed=;
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
