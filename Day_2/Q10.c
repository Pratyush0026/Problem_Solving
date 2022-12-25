#include <stdio.h>
main()
{
int i,j,k,p,d;
 d=5;
 for(i=1;i<=3;i++)
 {
    for(j=1;j<i;j++)
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
 d=3;
 for(i=1;i<=2;i++)
 {
    for(j=1;j>=i;j--)
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
}