//Enter any 5 numbers and print numbers

#include<stdio.h>

int main(){
    
    int arr[5];
    int i;

    printf("Enter any five numbers : ");

    for(int i=0;i<5;i++)
    {
    scanf("\n%d" ,&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }

}