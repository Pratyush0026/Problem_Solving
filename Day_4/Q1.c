#include <stdio.h>
main()
{
    int n,r,k,s=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    k=n;
    while (n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if (k==s)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}