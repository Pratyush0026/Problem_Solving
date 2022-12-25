#include <stdio.h>
main()
{
  int a,b,c;
  printf("Enter 3 sides of a triangle:\n");
  scanf("%d%d%d",&a,&b,&c);
  if (a==b && b==c && c==a)
  printf("Equilateral Triangle\n");
  else if (a!=b && b!=c && c!=a)
  printf("Scalene Triangle\n");
  else
  printf("Isosceles Triangle\n");
  
}
