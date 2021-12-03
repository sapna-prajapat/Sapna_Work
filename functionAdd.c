#include<stdio.h>
void add(int , int);
void add(int x , int y)
{
  int z;
  z=x+y;
  printf("Add:%d\n",z);
}
int main()
{
  int a,b;
  a=20;
  b=10;
  add(a,b);
  printf("Add\n");
  return 0;
}
