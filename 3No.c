 // Enter any three numbers and print greater number
// #include<stdio.h>

// int main(){
//     int num1,num2,num3;

//     printf("Enter No 1 : ");
//     scanf("%d",&num1);

//     printf("Enter No 2 : ");
//     scanf("%d",&num2);

//     printf("Enter No 3 : ");
//     scanf("%d",&num3);

//     if((num1>num2)&&(num1>num3)){
//         printf("\nNo 1 is greater : %d",num1);
//     }
//     else if((num2>num3)&&(num2>num1)){
//         printf("\nNo 2 is greater : %d",num2);
//     }
//     else if((num3>num1)&&(num3>num2)){
//         printf("\nNo 3 is greater :%d",num3);
//     }
//     else{
//         printf("\nNumbers are equal");
//     }
// }
// Enter any three numbers and find greater number
#include<stdio.h>

int main(){
    int num1,num2,num3;

    printf("Enter No 1 : ");
    scanf("%d",&num1);

    printf("Enter No 2 : ");
    scanf("%d",&num2);

    printf("Enter No 3 : ");
    scanf("%d",&num3);

    if((num1>num2) && (num1>num3)){
        printf("\nNumber 1 is greater : %d",num1);
    }
    else if((num2>num1) && (num2>num3)){
        printf("\nNumber 2 is greater : %d",num2);
    }
    else if((num3>num1) && (num3>num2)){
        printf("\nNumber 3 is greater : %d",num3);
    }
    else{
        printf("\nNumbers are equal");
    }
}