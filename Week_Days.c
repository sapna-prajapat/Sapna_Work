#include <stdio.h>
void Week_Days(int);

void Week_Days(int week)
{
      if(week == 1)
 {
     printf("Monday");
 }
 else if(week == 2)
 {
     printf("Tuesday");
 }
 else if(week == 3)
 {
     printf("Wednesday");
 }
 else if(week == 4)
 {
     printf("Thursday");
 }
 else if(week == 5)
 {
     printf("Friday");
 }
 else if(week == 6)
 {
     printf("Saturday");
 }
 else if(week == 7)
 {
     printf("Sunday");
 }
 else
 {
     printf("Invalid Input! Please enter week number between 1-7.");
 }
}

int main()
{
    int week;

    printf("Enter week number (1-7): ");
    scanf("%d", &week);
Week_Days(week);
    return 0;

}