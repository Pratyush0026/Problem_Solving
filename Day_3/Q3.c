#include<stdio.h>
#include<math.h>
main()
{
    int f=1,i,n,x;
    float s=1;
    printf("Enter Limit and value of x:\n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n-1;i++)
    {
        f=f*i;
        s=s+pow(x,i)/f;
    }
    printf("Sum:%.2f",s);
}