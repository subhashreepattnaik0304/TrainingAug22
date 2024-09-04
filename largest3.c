#include<stdio.h>
int main()
{

int a,b,c;
printf("enter three numbers:\n");
scanf("%d %d %d", &a,&b,&c);

if (a>=b && a>=c)
  printf("%d is the largest number\n",a);
if (b>=a && b>=c)
  printf("%d is the largest number\n",b);
if (c>=a && c>=b)
  printf("%d is the largest number\n",c);

return 0;
}

