#include <stdio.h>
int isVowel(char c);
int isLowerCase(char c);
int main()
{
       char c;
       printf("Enter a Character: ");
       scanf("%c", &c);
       if (isVowel(c))
       {
              printf("%c is a Vowel\n", c);
       }
       else
       {
              printf("%c is a Consonant\n", c);
       }
       return 0;
}
int isVowel(char c)
{
       if (isLowerCase(c))
              c = c - 32;

       if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
              return 1;
       else
              return 0;
}
int isLowerCase(char c)
{
       if (c >= 'a' && c <= 'z')
              return 1;
       else
              return 0;
}
