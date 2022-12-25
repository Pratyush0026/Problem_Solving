#include <stdio.h>
main()
{
  float x,y;
  printf("Enter x and y axis coordinates:\n");
  scanf("%f%f",&x,&y);
  if (x==0 && y==0)
  printf("Origin");
  else if (x>0 && y>0)
  printf("1st Quadrant");
  else if (x>0 && y<0)
  printf("4th Quadrant");
  else if (x<0 && y<0)
  printf("3rd Quadrant");
  else
  printf("2nd Quadrant");
}


