#include<stdio.h>

void Search_Ele(int arr[],int n)
{
      int i,found=0;
     for(i=0 ; i<=9 ; i++)
     {
         if(n==arr[i])
           {
               found =1;
               break;   
         }
       }
       if(found==1)
       {
           printf("Element is found\n");
       }
       else
       printf("Element is not found\n");
       
}

int main()
{
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int i,n;
   
   printf("Enter Element you want to find\n");
   scanf("%d",&n);
   
   Search_Ele(arr,n);
   
       return 0;
}
