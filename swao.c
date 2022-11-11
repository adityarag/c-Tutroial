/*
WAP a program to swap 2 numbers
*/

#include<stdio.h>
int main()
{

int a,b;
printf("Enter the no. a:");
scanf("%d",&a);

printf("Enter the no. b:");
scanf("%d",&b);

a = a+b;
b = a-b;
a = a-b;

printf("Swap no. a is %d\n b is %d",a,b);


return 0;
}
