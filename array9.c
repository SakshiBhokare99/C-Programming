#include<stdio.h>

int main(){
    int arr[10];
    int i,n;
    int ch;
    int search;
    int flag=0;

    printf("\n - create array\2. Display Array\3. Search Element \4.Saoft Array \5.Insert");
    printf("\nEnter y0ur choice");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: //create
        printf("How many elements do you want in array, Max size is 10");
        scanf("%d",&n);

        printf("\nEnetr %d number in array");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
       break;

       case 2://Display
         printf("\n%d elements in array are \n",n);
         for(i=0;i<n;i++)
         {
            printf("%5d",arr[i]);
         }
         break;

         case 3: //search element
           printf("\nEnter element to serach from array\n");
           scanf("%d",&search);
           for(i=0;i<n;i++){
            if(arr[i]==search){
                flag=1;
            }
        }

        if(flag)
        {
            printf("\nElement found");
        }
        else{
            printf("\nEle,emt not found");
        }
    
    
    }
}