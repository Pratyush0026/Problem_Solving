#include <stdio.h>
main()
{
int i,j,k,p,d=1;
 for(i=1;i<=3;i++)
 {
    for(j=2;j>=i;j--)
    {
        printf(" ");
    }
    for(k=1;k<=d;k++)
    {
        printf("*");
    }
    d+=2;
    printf("\n");
 }
 d=3;
 for(i=1;i<=2;i++)
 {
    for(j=1;j<=i;j++)
    {
    printf(" ");
    }
    for(k=1;k<=d;k++)
    {
    printf("*");
    }
    printf("\n");
    d-=2;
 } 
}