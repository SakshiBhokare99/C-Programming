// Enter any 2 numbers and perform operators addition,subtraction,multiplication,division & modulous

#include<stdio.h>

int main(){
    int num1,num2,add,sub,mul;
    float div,mod;

    printf("Enter no 1 : ");
    scanf("%d",&num1);

    printf("Enter no 2 : ");
    scanf("%d",&num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div =(float)(num1 / num2);
    mod = (float)(num1 % num2);

    //calculations 
    printf("\n\t------------------operators--------------------------\n");
    printf("\nEnter addition \t\t:\t %d",add);
    printf("\nEnter subtraction \t:\t %d",sub);
    printf("\nEnter multiplication \t:\t %d",mul);
    printf("\nEnter division \t\t:\t %f",div);
    printf("\nEnter modulus \t\t:\t %f",mod);

    

}