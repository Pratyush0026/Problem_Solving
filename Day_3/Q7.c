#include<stdio.h>
int main()
{
    int i,n,d=1,j;
    float s=0,f;
    printf("Enter Limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=d;j++)
        {
        f=f*j;
        }
        if (i%2==0)
        s=s-(i/f);
        else
        s=s+(i/f);
        d+=2;
    }
    printf("Sum:%f",s);
    return 0;
}