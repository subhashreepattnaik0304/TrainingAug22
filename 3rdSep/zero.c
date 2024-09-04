#include<stdio.h>
int main()
{
double num;
printf("enter a number:\n");
scanf("%lf", &num);
if(num <=0.0)
{
 if(num == 0.0)
   printf("Zero\n");
 else
   printf("Negative\n");
}
else
   printf("Positive\n");

return 0;
}
