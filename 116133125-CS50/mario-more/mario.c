#include <cs50.h>
#include <stdio.h>

int main(void)
{   int n;
    do {
           n=get_int("Height : ");
    }
    while (n<1||n>8);
    for(int i=1;i<=n;i++) // bat dau tu 0 tao khoang trong
    {
        for(int j=1;j<=n+1+i;j++) // 2*n+1 
        {
            if(j<n+1-i||j>n+1+i)
            {
                printf(" ");
            }
            else if(j==n+1){ printf("  ");}
            else{printf("#");}

        }
        printf("\n");
    }
    return 0;

}