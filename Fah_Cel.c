#include<stdio.h>
void Fah_Cel(float);

void Fah_Cel(float cel)
{
      float cel;
      cel = 5/9*(F-32);
      printf("Fahrenheit : %f",cel);
}

int main()
{
    float  fah ;
    
    printf("Enter the value of Celcius :");
    scanf("%f",&fah);
    
    Cel_Fah(fah);
    
    return 0;
}
