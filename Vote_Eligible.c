#include <stdio.h>
void Vote_ELigible(int);

void Vote_ELigible(int age)
{
       if (age >= 18)
              printf("YOU ARE ELIGIBLE FOR GIVING VOTE!\n");
       else
              printf("YOU ARE NOT ELIGIBLE FOR GIVING VOTE!\n");
}

int main()
{
       int age;

       printf("\nEnter Your Age \n");
       scanf("%d", &age);

       Vote_ELigible(age);

       return 0;
}