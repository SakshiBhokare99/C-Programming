#include<stdio.h>
#include<math.h>

int main(){
    int num ,count=0, temp=num,sum=0;

    printf("Enter original no :");
    scanf("%d",&num);

    //count the digit
    while(num>0)
    {
      count++;
      num/=10;
    }


    num=temp;
  
    //fetch a digit
    while (num>0)
    {
        int digit=num%10;
        sum+=pow(digit,count);
        num/=10;
    }
    if(temp==sum){
        printf("%d is armsrong number",temp);
    }
    else{
        printf("%d is not armstrong number",temp);
    }
    
        
      
    
    
    
}