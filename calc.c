#include<stdio.h>
int main()
{
char operator;
double a,b;
printf("enter an operator(+,-,*,/):\n");
scanf("%c", &operator);
printf("enter two numbers:\n");
scanf("%lf %lf",&a,&b);

switch(operator){
   case '+':
   printf("%.1lf + %.1lf = %.1lf\n", a, b, a+b);
   break;
   case '-':
   printf("%.1lf - %.1lf = %.1lf\n", a, b, a-b);
   break;
   case '*':
   printf("%1.lf * %.1lf = %.1lf\n", a, b, a*b);
   break;
   case '/':
   printf("%.1lf / %.1lf = %.1lf\n", a, b, a/b);
   break;
   default:
   printf("error\n");
   }
return 0;
}

 
