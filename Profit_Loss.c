#include <stdio.h>
void Profit_Loss(int, int);

void Profit_Loss(int sp, int cp)
{
       int amount;
       if (sp > cp)
       {

              amount = sp - cp;
              printf("profit = %d", amount);
       }

       else if (cp > sp)
       {

              amount = cp - sp;
              printf("loss = %d", amount);
       }

       else
       {
              printf("No profit no loss\n");
       }
}

int main()
{
       int cp;
       int sp;

       printf("Enter the cost price: ");
       scanf("%d", &cp);

       printf("Enter the selling price: ");
       scanf("%d", &sp);

       Profit_Loss(sp, cp);

       return 0;
}