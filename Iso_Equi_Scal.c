#include <stdio.h>
void Equi_Scal_Iso(int, int, int);

void Equi_Scal_Iso(int side1, int side2, int side3)
{

       if ((side1 == side2) && (side2 == side3))
       {
              printf("It is an Equilateral Triangle\n");
       }
       else if (side1 != side2 && side2 != side3 && side3 != side1)
       {
              printf("It is a Scalene Triangle\n");
       }
       else
       {
              printf("It is an Isoscales Triangle\n");
       }
}

int main()
{
       int side1, side2, side3;
       printf("Enter Length of Three Sides of a Triangle\n");
       scanf("%d %d %d", &side1, &side2, &side3);

       Equi_Scal_Iso(side1, side2, side3);

       return 0;
}