// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

bool valid(string s);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string s)
{
    bool lower=false;
    bool upper=false;
    bool number=false;
    bool symbol=false;
    int i=0;
    while(s[i]!='\0')
    {
        if(islower(s[i])){lower=true;}
        else if(isupper(s[i])){upper=true;}
        else if(isdigit(s[i])){number=true;}
        else{symbol=true;}
        i++;
    }
    if(lower&&upper&&number&&symbol){return true;}

    return false;
}
