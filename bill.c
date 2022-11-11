/*
WAP a program to calculate the total bill of the product.
Take Input of 5 items, their qty & their price.
Generate the total bill at the end.
*/

#include<stdio.h>
int main()
{

int i1,i2,i3,i4,i5,p1,p2,p3,p4,p5,q1,q2,q3,q4,q5,sum;
{
printf("item no.1:\n");
scanf("%d",&i1);
printf("item no.1 price:\n");
scanf("%d",&p1);
printf("item no.1 Quantity:\n");
scanf("%d",&q1);
}
{
printf("item no.2:\n");
scanf("%d",&i2);
printf("item no.2 price:\n");
scanf("%d",&p2);
printf("item no.2 Quantity:\n");
scanf("%d",&q2);
}
{
printf("item no.3:\n");
scanf("%d",&i3);
printf("item no.3 price:\n");
scanf("%d",&p3);
printf("item no.3 Quantity:\n");
scanf("%d",&q3);
}
{
printf("item no.4:\n");
scanf("%d",&i4);
printf("item no.4 price:\n");
scanf("%d",&p4);
printf("item no.4 Quantity:\n");
scanf("%d",&q4);
}
{
printf("item no.5:\n");
scanf("%d",&i5);
printf("item no.5 price:\n");
scanf("%d",&p5);
printf("item no.5 Quantity:");
scanf("%d",&q5);
}

sum =p1+p2+p3+p4+p5;

printf("Total Of all 5 items: %d",sum);


return 0;
}