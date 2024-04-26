// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include<string.h>
string replace(string s)
{   int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'){s[i]='6';}
        else if(s[i]=='e'){s[i]='3';}
        else if(s[i]=='i'){s[i]='1';}
        else if(s[i]=='o'){s[i]='0';}
        i++;
    }
    return s;
}

int main(int argc, string argv[])
{
    if(argc==0||argc>2){printf("ERROR:404\n"); return 1;}
    printf("%s\n",replace(argv[1]));

}
