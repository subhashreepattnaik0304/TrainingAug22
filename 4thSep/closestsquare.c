#include<stdio.h>
#include<math.h>
int main()
{
int num, closestsquare,diff,mindiff = INT_MAX;

printf("enter a positive integer:\n");
scanf("%d", &num);
}

for (int i = 1; i * i <= num; i++)
{
diff = abs(num - i * i);
if (diff < mindiff) 
{
closestsquare = i * i;
mindiff = diff;
}
}
printf("the closest number having a wholenumber square root is %d\n", closestsquare);
return 0;
}

