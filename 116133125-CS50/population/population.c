#include <cs50.h>
#include <stdio.h>

int main(void)
{ int size;
    // TODO: Prompt for start size
 do {
    size=get_int("Start size: ");
 }
 while(size<9);
    // TODO: Prompt for end size
int number;
do{
    number=get_int("End size: ");
}while(number<size);
    // TODO: Calculate number of years until we reach threshold
int dem=0;

while(size<number)
{
    size=size+(size/3)-(size/4);
    dem++;
}
    // TODO: Print number of years
    printf("Years: %i\n", dem);
    return 0;
}
