/*
WAP to find the sum of first 50 positive characters and first first 100 negative numbers.
*/

#include<stdio.h>
int main(){

int i, sum1 = 0, sum2 = 0;

for(i = 1; i <= 50; i++)
{
    sum1 = sum1 + i;
}

for(i = -1; i >= -100; i--)
{
    sum2 = sum2 + i;
}

printf("The sum of first 50 positive numbers is %d \n", sum1);

printf("The sum of first 100 negative numbers is %d", sum2);

    return 0;
}