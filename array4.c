// enter any 10 numbers and print even sum and odd sum

#include<stdio.h>

int main(){
    int arr[10];
    int i;
    int even=0,odd=0;
    int evens=0,odds=0;

    printf("enter any 10 numbers in array : ");

    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);

        if(arr[i]%2==0){
            even++;
            evens=evens+arr[i];
        }
        else{
            odd++;
            odds=odds+arr[i];
        }


    }
    printf("\nTotal even numbers : %d and sum is : %d",even,evens);
        printf("\nTotal odd numbers : %d and sum is: %d",odd,odds);

    

}