#include <stdio.h>
main()
{
int d,i,j;
 for(i=1;i<=4;i++)
 {
    d=i;
    for(j=1;j<=i;j++)
    {
        printf("%d ",d);
        d++;
    }
    printf("\n");
 }   
}


