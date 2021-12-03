#include <stdio.h>
int Palindrome(int num);
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result = Palindrome(num);
    if(result==1)
        printf("%d is Palindrome number",num);
    else
        printf("%d is not an Palindrome number",num);
    return 0;
}
int Palindrome(int number)
{
    int num=0,r,n;
    n=number;
    while(n>0)
    {
        r=n%10;
        num=num*10+r;
        n=n/10;
    }
    if(num==number)
        return 1;
    else
        return 0;
}