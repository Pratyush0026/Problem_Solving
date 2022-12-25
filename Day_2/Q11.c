#include <stdio.h>
main()
{
int i,j,k=8,p,m,d;
 for(i=1;i<=5;i++)
 {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    for(d=1;d<=k;d++)
    {
        printf(" ");
    }
    m=i;
    for(p=m;p>=1;p--)
    {
        printf("%d",p);
    }
    printf("\n");
    k-=2;
 }   
}