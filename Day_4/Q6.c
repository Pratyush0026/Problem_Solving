#include<stdio.h>
#include <math.h>
void perfect(int a,int b){
    int i,r,k,n,c;
    float s;
    printf("Armstrong numbers:\n");
    for(i=a;i<=b;i++)
    {
        c=0;
        s=0;
        n=i;
        k=n;
        while (n>0){
            n=n/10;
            c++;
        }
        n=k;
        while(n>0){
            r=n%10;
            s=s+pow(r,c);
            n=n/10;
        }
        if (s==k)
        printf("%d ",i);
    }
}
void main(){
    int a,b;
    printf("Enter range for armstrong numbers:\n");
    scanf("%d%d",&a,&b);
    perfect(a,b);

}