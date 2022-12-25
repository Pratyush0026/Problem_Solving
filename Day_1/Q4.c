#include <stdio.h>
main()
{
  int y;
  printf("Enter a year:\n");
  scanf("%d",&y);
  (y%4==0 && y%100!=0 || y%400==0)  ? printf("Leap Year") :printf("Not a Leap Year");
}
