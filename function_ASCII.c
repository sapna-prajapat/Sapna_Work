#include<stdio.h>
void Check_ASCII(char);

void Check_ASCII(char cha)
{
     if((cha  >=  'A'  &&  cha<='Z'  ) || (cha  >=  'a'  &&  cha<='z' ))
     printf("ASCII  value of %c is %d",cha,cha);
}

int main()
{
   char ch;
   
   printf("Enter A Character \n");
   scanf("%c",&ch);
   
   Check_ASCII(ch);
   
   return 0;
}
