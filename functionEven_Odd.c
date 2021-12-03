#include<stdio.h>
int evenodd(int);
int evenodd(int n)
{
   if(n%2==0)
   return 0;
   return 1;
}
int main()
{
  int n,x;
  printf("Enter number:\n");
  scanf("%d",&n);
  if(evenodd(n))
  printf("odd\n");
  else
  printf("Even\n");
  return 0;
}
