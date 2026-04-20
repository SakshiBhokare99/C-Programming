#include<stdio.h>

int main(){
    int arr[10];
    int i,min,max;
    int sum=0;
    float avg;

    printf("Enter 10 numbers in array : ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=sum/10;
    }
    min=arr[0];
    max=arr[0];

    for(i=1;i<10;i++)
    {
        if(arr[1]<min){
            min=arr[i];
        }
        else{
            max=arr[i];
        }
    }
    printf("\nSmall value is : %d",min);
    printf("\nGreater value is : %d",max);
    printf("\nSum is : %d",sum);
    printf("\nAvg is : %f",avg);

}

// enter any 10 salary nd print al salary greater than avs salary
// array operation : create , search, sort insert delete

// enter 5 num nd print second greater number without sorting

