#include<stdio.h>
#include <math.h>
void lcm(int a,int b){
    int i,k,h,l;
    float s;
    printf("LCM:\n");
    k=a<b?a:b;
    for(i=1;i<=k;i++)
    {
      if (a%i==0 && b%i==0)
      h=i;
    }
    l=(a*b)/h;
    printf("%d",l);
}
void main(){
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    lcm(a,b);
}