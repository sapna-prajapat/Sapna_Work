#include<stdio.h>
int main()
{
 int x=123;
 x=x/10;
 printf("Remove last digit:%d\n",x);
 
 int y=123;
 int r;
 r=y%10;
 printf("value of r=%d\n",r);
 
 int z=123,p;
 p=z%10;
 printf("p:%d\n",p);
 z=z/10;
 printf("z:%d\n",z);
 p=z%10;
 printf("p:%d\n",p);
 z=z/10;
 printf("z:%d\n",z); 
 return 0;
}
