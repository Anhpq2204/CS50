#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
int dem[26]={0};
string ci(string p, string s);
bool valid(string t);
int main(int argc, string argv[])

{
    if(argc!=2){printf("INVALID\n"); return 1;}
    if(argc==2)
    {
        if(valid(argv[1])==false)
        {
            printf("INVALID\n"); return 1;
        }
    }
    string plain=get_string("plaintext:  ");
    string cipher=ci(plain,argv[1]);
    printf("ciphertext: %s\n",cipher);
}
string ci(string p, string s)
{
    int i=0;
    while(p[i]!='\0')
    {
        if(isupper(p[i]))
        {
            p[i]=toupper(s[p[i]-65]);
        }
        else if(islower(p[i]))
        {
            p[i]=tolower(s[p[i]-97]);
        }
        i++;
    }
    return p;
}
bool valid(string t)
{
    int i=0;
    bool num=true;
    int dnum=0;
    bool alpha=true;
    while(t[i]!='\0')
    {
        if(isalpha(t[i]))
        {
            dnum++;
            dem[toupper(t[i])-65]++;
            if(dem[toupper(t[i])-65]>1){return false;}
            }
        else
        {
            alpha=false;
            }
            i++;
    }
    if(dnum!=26){num=false;}
    if(num&&alpha){return true;}
    return false;
}

