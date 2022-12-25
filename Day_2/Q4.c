#include <stdio.h>
main()
{
int d,i,j;
 for(i=65;i<=68;i++)
 {
    d=i;
    for(j=65;j<=i;j++)
    {
        printf("%c",d);
        d++;
    }
    printf("\n");
 }   
}


