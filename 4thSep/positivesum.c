#include<stdio.h>
int main()
{
int num, sum = 0, digit;
printf("enter a positive number:\n");
scanf("%d", &num);
while(num>0)
{
  digit = num % 10;
  sum += digit;
  num /= 10;
}
printf("sum of the given number:%d\n", sum);
return 0;
}
