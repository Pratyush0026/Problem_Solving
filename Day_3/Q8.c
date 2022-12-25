#include<stdio.h>
#include<math.h>
main()
{
    int i,n;
    float s=0;
    printf("Enter Limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*(i+1)*(i+2);
    }
    printf("Sum:%.2f",s);
}