#include<stdio.h>
void perfect(int a,int b){
    int i,s,j;
    printf("Prime numbers:\n");
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=1;j<=i;j++){
            if (i%j==0)
            s++;
        }
        if (s==2)
        printf("%d ",i);
    }
}
void main(){
    int a,b;
    printf("Enter range for prime numbers:\n");
    scanf("%d%d",&a,&b);
    perfect(a,b);

}