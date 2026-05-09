// WAP check the given character is  vowel or consonant

#include<stdio.h>

int main(){
    char ch;
    
    printf("Enter any character : ");
    scanf("%c",&ch);


    if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')){
        printf("\nCharacter is vowels");
    }
    else{
        printf("\nCharacter is consonant");
    }

    
}