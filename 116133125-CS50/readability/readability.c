#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
#include<math.h>
int Le(int letter,string s);
int W(int word,string s);
int Se(int sentence,string s);

int main(void)
{
    int letter=0;
    int word=1;
    int sentence=0;
    //prompt for input
    string text=get_string("Text: ");
    //cal the letter
    letter=Le(letter,text);
    word=W(word,text);
    sentence=Se(sentence,text);
    float L=(float)letter/word*100;
    float S=(float)sentence/word*100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if(index>=16){printf("Grade 16+\n");}
    else if(index<1){printf("Before Grade 1\n");}
    else
    {printf("Grade %i\n",(int)round(index));}


}
int Le(int letter,string s)
{
    int dem=0;
    int i=0;
    while(s[i]!='\0')
    {
        if(isupper(s[i])||islower(s[i]))
        {dem++;}
        i++;
    }
    return dem;
}
int W(int word,string s)
{
    int dem=0;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {dem++;}
        i++;
    }
    return dem+1;
}
int Se(int sentence,string s)
{
     int dem=0;
     int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='!'||s[i]=='.'||s[i]=='?')
        {dem++;}
        i++;
    }
    return dem;
}

