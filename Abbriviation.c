#include<stdio.h>
void Abbriviation(char[] , char[] , char[]);

void Abbriviation(char name1[20],char name2[30],char name3[30])
{
printf("%c. %c. %s",name1[0],name2[0],name3);
}
int main()
{
  char name1[20];
  char name2[30];
  char name3[30];
  
  printf("Enter your full name\n");
  scanf("%s%s%s",name1,name2,name3);
  
  Abbriviation(name1,name2,name3);
 
  return 0;
}
