#include<stdio.h>
main()
{
int number;
printf("enter a number:\n");
scanf("%d",&number);

if(number % 2 == 0)
   printf("%d is even\n",number);
else
   printf("%d is odd\n",number);
return 0;
}
