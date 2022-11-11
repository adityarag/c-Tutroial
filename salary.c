
/*
WAP to take employee_id(eg 100,101)input, total worked hours and the salary the employee gets per hour.
Calculate the total salary the employee recives at the end.  
*/

#include<stdio.h>
int main()
{

int id;
float hrs,salary,total;

printf("Enter the employee ID\n");
scanf("%d", &id);

printf("Total work hours\n");
scanf("%f", &hrs);

printf("Salary per hour\n");
scanf("%f", &salary);

total=salary*hrs;

printf("\nEmployee_id: %d Salary = %f",id,total);












return 0;
}
