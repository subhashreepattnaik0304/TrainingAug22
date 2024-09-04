#include<stdio.h>
main()
{
float weight;
printf("enter your weight:\n");
scanf("%f", &weight);

if(weight<18.5)
  printf("underweight\n");
if(weight>=18.5 && weight<=24.9)
  printf("normal weight\n");
if(weight>=25 && weight<=29.9)
  printf("overweight\n");
if(weight>=30)
  printf("obesity\n");
return 0;
}

