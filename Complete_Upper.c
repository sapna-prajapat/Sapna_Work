#include<stdio.h>
int main()
{
    char c[100];
    int i;
    printf("Please enter a string\n");
    fgets(c,100,stdin);
    for(i=0; c[i]!='\0'; i++){
        if(c[i]>='a'&&c[i]<='z'){
            c[i]=c[i]-32;
            
        }
        
    }
    printf("%s",c);

    return 0;
}