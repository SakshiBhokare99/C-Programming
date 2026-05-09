// check character is capital,smaller,number or another
#include<stdio.h>

int main(){
    char ch;
    printf("enter any character : ");
    scanf("%c",&ch);

    printf("\nASCII for %c is %d\n ", ch,ch);
    if((ch>=65)&&(ch<=90)){
        printf("\nits capital character");
    }
    else if((ch>=97)&&(ch<=122)){
        printf("\nits small character");
    }
    else if((ch>=48)&&(ch>=122)){
        printf("\nits number");
    }
    else{
        printf("\nother character");
    }
}