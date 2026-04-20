// Enter any 10 numbers and count even odd numbers

#include<stdio.h>
int main(){
    int arr[10];
    int i;
    int even=0,odd=0;

    printf("Enter any ten numbers in array");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
        {
           even++;
        }
        else{
            odd++;
        }
    }
    printf("\nTotal even numbers are: %d",even);
    printf("\nTotal odd numbers : %d",odd);


}