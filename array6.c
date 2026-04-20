#include<stdio.h>

int main(){
    int arr[5];
    int i;

    printf("Enter any 5 number in array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nRverse of number system\n");
    for(i=4;i>=0;i--)
    {
        printf("%d",arr[i]);
    }

}