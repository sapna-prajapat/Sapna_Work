#include <stdio.h>
#include <math.h>
void N_Power(int num);

void N_Power(int num)
{
       int n1, n2, n3;
       n1 = num;
       n2 = num * num;
       n3 = num * num * num;
       printf("\nOutput Is\n\n");
       // printf("%d  ,%d  ,%d \n\n",num,num*num,num*num*num);
       printf("%d  ,%d  ,%d \n\n", n1, n2, n3);
}

int main()
{
       int num;
       printf("\nEnter The Number .\n");
       scanf("%d", &num);

       N_Power(num);

       return 0;
}