//write a program to find the sum of first 50 numbers
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=50;i++)
    {
        sum=sum+i;
    }
    printf("sum of first 50 numbers is %d",sum);
    return 0;
}