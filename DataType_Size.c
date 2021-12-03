#include<stdio.h>
void DataType_Size(int,float,char,long double);

void DataType_Size(int a,float b,char c,long double d)
{
     printf("Size of Integer = %ld\n",sizeof (a));
     printf("Size of Integer = %ld\n",sizeof (b));
     printf("Size of Integer = %ld\n",sizeof (c));
     printf("Size of Integer = %ld\n",sizeof (d));
}

int main()
{
     int a;
     float b;
     char c;
     long double d;
    
     DataType_Size(a,b,c,d);     
    
     return 0;
}
