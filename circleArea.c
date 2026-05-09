// Enter radius and print area of circle

#include<stdio.h>

int main(){
    float radius,area;

    printf("Enter radius : ");
    scanf("%f",&radius);

    area=3.14*radius*radius;

    printf("Area of circle : %f",area);
}