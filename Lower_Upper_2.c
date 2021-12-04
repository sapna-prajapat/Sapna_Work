#include<stdio.h>
int main()
{
 char a[50];
  int i;
   printf("enter the string\n");
    fgets(a,50,stdin);
   
   for(i=0;a[i]!='\0';i++)
     {
      if(a[i]>='A'&&a[i]<='Z')
       a[i]=a[i]+32;
      else if(a[i]>='a'&&a[i]<='z')
        a[i]=a[i]-32;
     }     
    printf("string is %s",a);
return 0;
}   