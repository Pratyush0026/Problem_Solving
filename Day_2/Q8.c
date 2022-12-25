#include <stdio.h>
main()
{
int i,j,k;
 for(i=1;i<=4;i++)
 {
    for(j=i;j<=4;j++)
    {
        printf(" ");
    }
    for(k=1;k<=i*2-1;k++)
    {
        printf("*");
    }
    printf("\n");
 }   
}