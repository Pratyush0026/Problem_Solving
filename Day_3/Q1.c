#include<stdio.h>
main()
{
    int f=1,i,s=0,n;
    printf("Enter Limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        s=s+f;
    }
    printf("Sum:%d",s);
}