#include<stdio.h>
int main()
{
    int n;
    printf("Enter limit:\n");
    scanf("%d",&n);
    int a[n],i,k=1,p=2,j,l=n;
    if (n%2!=0)
    l=n+1;
    for(i=0;i<l/2;i++)
    {
        if(k<=n)
        a[i]=k;
        k+=2;
    }
    
    for(j=n-1;j>=i;j--)
    {
        if(p<=n)
        a[j]=p;
        p+=2;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   

    return 0;
}