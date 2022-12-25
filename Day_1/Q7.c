#include <stdio.h>
main()
{
  float c;
  printf("Enter temperature in Centrigade\n");
  scanf("%f",&c);
  if (c<0)
  printf("Freezing Waether\n");
  else if (c>=0 && c<10)
  printf("Very cold weather\n");
  else if (c>=10 && c<20)
  printf("Cold weather\n");
  else if (c>=20 && c<30)
  printf("Normal in Temp\n");
  else if (c>=30 && c<40)
  printf("It's Hot\n");
  else
  printf("It's Very Hot\n");
}


