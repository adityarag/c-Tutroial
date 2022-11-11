//write a program to print the array using functions


#include <stdio.h>
void print_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{  
    int arr[2][3]={1,2,3,4,5},{5,4,3,2,1};
    int n=5;
    print_array(arr,n);
    return 0;
}

