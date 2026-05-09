#include<stdio.h>

int main(){
    float arr[10];
    int i;
    int sum=0;
    float avg;

    printf("Enter 10 salary in array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
         
    }

    avg=sum/10;
    printf("\nSum is : %d",sum);
    printf("\nAvg is : %f",avg);

    // print salary greater than average
    printf("\nPrint salary greater than avg salary:");
    for(i=0;i<10;i++)
    {
        if(arr[i] > avg)
        {
            printf("\n%f",arr[i]);
        }
    }

}