#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "hELLO";
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        a[i]=a[i]+32;
        printf("%c",a[i]);
    }

    return 0;
}