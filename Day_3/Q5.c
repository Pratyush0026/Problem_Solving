#include<stdio.h>
#include<math.h>
main()
{
    int f,i,n,x,d=1,j;
    float s=0;
    printf("Enter Limit and value of x:\n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=d;j++)
        {
        f=f*j;
        }
        if(i%2==0)
        s=s-pow(x,d)/f;
        else
        s=s+pow(x,d)/f;
        d+=2;
    }
    printf("Sum:%.2f",s);
}