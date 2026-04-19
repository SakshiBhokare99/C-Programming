#include<stdio.h>

int main(){

    //manual print
    int arr[5]={10,20,30,40,50};
    int i;

    printf("\n%d",arr[0]);
    printf("\n%d",arr[1]);
    printf("\n%d",arr[2]);
    printf("\n%d",arr[3]);
    printf("\n%d",arr[4]);

    // using loop
    printf("\n -----------using loop-------------\n");

    for(int i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }

    // reverse order
    printf("\n---------------------- reverse order---------------------------\n");
    for(int i=4;i>=0;i--)
    {
        scanf("\n%d",&arr[i]);
    }
    



}