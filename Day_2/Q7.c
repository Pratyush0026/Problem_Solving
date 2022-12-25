#include <stdio.h>
main()
{
int i,j,k,p,l;
 for(i=1;i<=4;i++)
 {
    for(j=3;j>=i;j--)
    {
        printf(" ");
    }
    for(k=i;k>=1;k--)
    {
        printf("%d",k);
    }
    for(p=2;p<=i;p++)
    {
        printf("%d",p);
    }
    for(l=1;l<=i;l++)
    {
        printf("\n");
    }

 }   
}