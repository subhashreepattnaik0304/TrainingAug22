#include<stdio.h>
main()
{
int temp;
printf("enter temperature:\n",temp);
scanf("%d", &temp);

if(temp>30)
  printf("it's hot outside, stay hydrated!\n");
if(temp>=20 && temp<=30)
  printf("The weather is nice and warm.\n");
if(temp>=10 && temp<=19)
  printf("it's a bit chilly, wear a jacket.\n");
if(temp<10)
  printf("it's cold outside, stay warm!\n");

return 0;
}


