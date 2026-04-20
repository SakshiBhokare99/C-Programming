// Enter any 10 numbers and search for given number if number is found display number found or display not found

#include<stdio.h>

int main(){
    int arr[5];
    int i;
    int search;
    int x=0;

    printf("Enter any 5 numbers in array : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter element to search in array : \n");
    scanf("%d",&search);

    for(i=0;i<5;i++){
        if(arr[i]==search){

            x=1;
            break;
        }
    }
    if(x == 1){
        printf("Number found");
    }
    else{
        printf("Number not found");
    }

}