#include<stdio.h>
int data=100;

void f1();
void f2();
void f3();

void f1()
{
   int data = 200;
   data=data+10;
   printf("%d\n",data);
}

void f2()
{
   printf("%d\n",data);
   printf("%d\n",(data+20));
}

void f3(int data)
{
   data=data+30;
   printf("%d\n",data);   
}

int main()
{
  f1();
  f2();
  {
    int data = 300;
    f3(data);
  }
  printf("%d\n",data);
  return 0;
}
