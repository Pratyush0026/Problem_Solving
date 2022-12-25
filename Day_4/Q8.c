#include<stdio.h>
#include <math.h>
void gcd(int a,int b){
    int i,k,h;
    float s;
    printf("GCD:\n");
    k=a<b?a:b;
    for(i=1;i<=k;i++)
    {
      if (a%i==0 && b%i==0)
      h=i;
    }
    printf("%d",h);
}
void main(){
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    gcd(a,b);

}