/*
WAP a program to find the bikes average consuption on a given distance travelled(in km)
& total fuel consumed(in liters)
*/

#include<stdio.h>
int main()
{

float distance, fuel,avg;

printf("Enter The distance: ");
scanf("%f",&distance);

printf("Enter The Fuel consumed: ");
scanf("%f",&fuel);

avg = distance / fuel;

printf("Average of bike is: %f",avg);



return 0;
}
