#include<stdio.h>

int main(){
    int n,cnt,temp;
    int r,i;
    int result;
    int sum=0;

    printf("Enter any no: ");
    scanf("%d",&n);

    temp=n;

    cnt=0;
    while (n!=0)
    {
        cnt++;
        n/=10;
    }
    
    n=temp;
    while (n!=0)
    {
        i=1;
        result=1;
        r=n%10;

        while (i<=cnt)
        {
            result=result*r;
            i++;
        }
        sum=sum+result;
        n/=10;
        
    }
    if(temp==sum){
        printf("%d is armstrong no",temp);
    }
    else{
        printf("%d is not armstrong no",temp);
    }
    
    
}