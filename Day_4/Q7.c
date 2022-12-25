#include<stdio.h>
#include <math.h>
void perfect(int a,int b){
    int i,r,k,n,c,s,f,j;
    printf("Armstrong numbers:\n");
    for(i=a;i<=b;i++)
    {
        s=0;
        n=i;
        k=n;
        while(n>0)
        {
            r=n%10;
            f=1;
            for(j=1;j<=r;j++)
            {
            f=f*j;
            }
            n=n/10;
            s=s+f;
        }
        if (s==k)
        printf("%d ",i);
    }
}
void main(){
    int a,b;
    printf("Enter range for strong numbers:\n");
    scanf("%d%d",&a,&b);
    perfect(a,b);

}