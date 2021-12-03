#include<stdio.h>
void Char_Alpha(char);

void Char_Alpha(char character)
{
    if((character >=  'a'   &&  character  <=  'z' )  ||  (character  >=  'A'  &&  character  <=  'Z'  ))
            printf("%c is character\n",character);
        else
          printf("Invalid\n"); 
}

int main()
{
    char ch;
    
    printf("Enter a Character \n");
    scanf("%c",&ch);
    
    Char_Alpha(ch);
    
    return 0;
}
