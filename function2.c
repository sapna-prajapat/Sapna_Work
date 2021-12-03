#include<stdio.h>
void f1();
void f2();
void f3();

void f1()
  {
     printf("f1-called...\n");
     f3();
     printf("f1----end\n");
  }
  
void f2()
  {
     printf("f2-called...\n");
  }
  
void f3()
  {
     printf("f3-called...\n");
     f2();
     printf("f3 end---\n");
  }
  
 int main()
 {
    f1();
    f2();
    f3();
   return 0;
 }
