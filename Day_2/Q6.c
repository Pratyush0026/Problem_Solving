#include <stdio.h>
main()
{
int i,j,k,d=1,n=0,p;
 for(i=1;i<=4;i++)
 {
    for(j=3;j>=i;j--)
    {
        printf(" ");
    }
    for(k=i;k<=d;k++)
    {
        printf("%d",k);
    }
    for(p=n;p>=i;p--)
    {
        printf("%d",p);
    }
    d+=2;
    n+=2;
    printf("\n");
 }   
}