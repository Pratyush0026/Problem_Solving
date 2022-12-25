#include <stdio.h>
void main()
{
    int n,a[10],i,t;
    printf("Enter size of array less than 10:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (n%2 == 0)
        for(i=0;i<n;i+=2)
        {
            t=a[i];
            a[i] = a[i+1];
            a[i+1]=t;
        }
    else
        for(i=0;i<n-1;i+=2)
        {
            t=a[i];
            a[i] = a[i+1];
            a[i+1]=t;
        }
        printf("Swapped  Array:\n");
         for(i=0;i<n;i++)
        {
           printf("%d ",a[i]);
        }
}