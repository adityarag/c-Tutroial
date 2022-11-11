/*
WAP to find the year, month and days if no. of days is given.
*/

#include<stdio.h>
int main()
{

int year, month,days;

printf("How many days: \n");
scanf("%d",&days);


year =  days / 365;

days = days % 365;

month = days /12;

printf("Years = %d Months = %d Days = %d ",year,month,days);







return 0;
}
