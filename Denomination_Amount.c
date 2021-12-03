
#include <stdio.h>
void Denomination_Amount(int);

void Denomination_Amount(int amount)
{
       int notes;
        int denominations[7] = {2000 ,500, 100, 50, 20, 10, 1};
      for (int i = 0; i < 7; i++) 
{
    notes = amount / denominations[i];
    if (notes)
    {
        amount = amount % denominations[i]; 
        printf("%d * %d = %d \n", notes, denominations[i], 
            notes * denominations[i]);
    }                
}
}

int main() 
{    
    int amount, notes;   

    printf("Enter amount:\n ");
    scanf("%d", &amount);

    Denomination_Amount(amount);

    return 0;
}

