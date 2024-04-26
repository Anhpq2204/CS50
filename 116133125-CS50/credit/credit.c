#include <cs50.h>
#include <stdio.h>
int check(long num)
{ int res=0;
    while(num>0)
    {
        res+=num%10;
        num/=10;
        if(num%10>4)
        {   int luu=2*(num%10);
            res+=luu%10;
            luu/=10;
            res+=luu%10;
        }
        else
        {
            res+=(2*(num%10));
        }
        num/=10;
    }
   return res;
}
int len(long num)
{
    int count=0;
    while(num>0)
    {

        num/=10;
        count++;
    }
    return count;
}
int f(long num, int count)
{
    int dem=0;
    while(dem!=count-2)
    {
        num/=10;
        dem++;
    }
    return num;
}

int main(void)
{
    // prompt for input
    long num=get_long("Number: ");
    //calculate the checksum
    int sum=check(num);
    //check for length
    int length=len(num);
    //check for starting digit
    int first=f(num,length);
    //print result
    if(sum%10==0)
    {
        if(length==15&&(first==34||first==37))
        {
            printf("AMEX\n");
        }
        else if(length==16&&(first==51||first==52||first==53||first==54||first==55))
        {
            printf("MASTERCARD\n");
        }
        else if((length==13||length==16)&&(first/10)==4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }


    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
