#include <stdio.h>
main()
{
    int bs,allow;
    float pf,da,hra,ns;
    char ch;

    printf("Enter Basic salary and Grade:\n");
    scanf("%d %c",&bs,&ch);

    pf = 0.11 * bs;
    da = 0.5 * bs;
    hra = 0.2 * bs;

    if (ch=='A' || ch=='a')
    allow=1700;
    else if (ch=='B' || ch=='b')
    allow=1500;
    else if (ch=='C' || ch=='c')
    allow=1300;

    ns = bs+da+hra+allow-pf;
    printf("%d",(int)ns);
}