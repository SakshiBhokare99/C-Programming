// Enter any number and check given number is div by 3 and 5

#include<stdio.h>
int main(){
    int num;
    
    printf("Enter any number : ");
    scanf("%d",num);

    if(num%3==0&&num%5==0){

        printf("\nNo is divisible by 3 and 5" );
    }
    else if(num % 3 == 0){
        printf("\nNo is divisible by 3 only");
    }
    else if(num % 5 ==0){
        printf("\nNo is  divisible by 3 and 5");
    }
    else{
        printf("\nNo is not divisible by 3 and 5");
    }
}