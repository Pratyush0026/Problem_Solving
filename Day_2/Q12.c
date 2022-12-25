#include <stdio.h>
main()
{
int i,j,k=0,p,m,d;
 for(i=6;i>=1;i--)
 {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    for(d=0;d<k;d++)
    {
        printf(" ");
    }
    if (i==6)
    m=i-1;
    else
    m=i;
    for(p=m;p>=1;p--)
    {
        printf("%d",p);
    }
    printf("\n");
    if (i==6)
    k+=1;
    else
    k+=2;
 }   
}