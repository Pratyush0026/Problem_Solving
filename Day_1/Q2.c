#include <stdio.h>
main()
{
    int a,b,c,d,e;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b)?a:b;
    e=(d>c)?d:c;
    printf("Largest among the 3 entered numbers:%d",e);
}