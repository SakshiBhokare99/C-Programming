// 1. Print bio data


#include<stdio.h>

int main(){
    char name[10],clgname[10];
    int mobile;
    char email[10];

    printf("Enter name : ");
    scanf("%s",name);

    printf("Enter clg name : ");
    scanf("%s",clgname);

    printf("Enter mobile no : ");
    scanf("%d",mobile);

    printf("Enter emai : ");
    scanf("%s",email);

    // Display biodata
    printf("\n\t\t----------------------------student Biodata-----------------------------------\n");
    printf("\n\t\tEnter student name \t:\t\t %s",name);
    printf("\n\t\tEnter student clg name \t:\t\t %s",clgname);
    printf("\n\t\tEnter mobile no \t:\t\t %d",mobile);
    printf("\n\t\tEnter email \t\t:\t\t %s",email);
}