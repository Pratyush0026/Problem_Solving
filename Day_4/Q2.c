#include<stdio.h>
int med(int a[5])
{
    int t,i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    } 
    return a[2];
}
int mean(int a[5])
{
    int mean,i,s=0;
    for(i=0;i<5;i++){
        s=s+a[i];
    }
    return s/5;
}
int main(){
    int a[5],m,i,j,t,me;
    printf("Enter the 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    m=med(a);
    me=mean(a);
    printf("Median:%d\n",m);
    printf("Mean:%d",me);
}