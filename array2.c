// Enter any 5 numbers and print numbers in reverse order.


#include<stdio.h>

int main(){
    int arr[5];
    int i;

    printf("Enter any 5 numbers : ");

    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }



    for(i=4;i>=0;i--)
    {
        printf("\n%d",arr[i]);
    }
}