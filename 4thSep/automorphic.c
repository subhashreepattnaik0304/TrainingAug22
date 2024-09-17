#include<stdio.h>
#include<math.h>
int main()
{
int num, sqr, lastdigit,numdigit;
printf("enter a number:\n");
scanf("%d", &num);
sqr=num*num;
numdigit=log10(num)+1;
lastdigit=sqr%(int) pow(10,numdigit);
if(lastdigit == num)
{
printf("automorphic");
else
printf("not automorphic");
return 0;
}
}
