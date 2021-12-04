#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="sapna";
    char s2[]="SaPna";
    int c ,i;
    for(i=0; s1[i]!='\0'; i++);
    for(i=0; s2[i]!='\0'; i++);
     if(s1[i]==s2[i])
    {
    	for(i=0;s2[i]!='\0';i++)  
        {
        	if(s1[i]==s2[i])
        	 c++;
 	    }
 	    if(c==i)
          printf("Strings are equal");
        else
          printf("Strings are not equal");
    }
    else
     printf("Strings are equal");
    return 0;
} 