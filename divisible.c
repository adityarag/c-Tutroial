#include<stdio.h>
int main(){
int i, avg =1 , sum = 0, n, studentno,highest = 0;
    int marks[5];

    for(i=0;i<5;i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

printf("\n Marks are");
for(i=0;i<5;i++){
    printf("\n marks of student %d is %d", i+1, marks[i]);
    sum = sum + marks[i];
}

avg = sum/5;
printf(" \nThe average is %d\n", avg);
for ( int i = 0; i < 5; i++ )
{
    if ( marks[i] > highest )
    {
        highest = marks[i];
        studentno = i+1;
    }
}
printf("The highest marks is %d and the student no is %d", highest, studentno);


}