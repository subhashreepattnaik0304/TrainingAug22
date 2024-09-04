#include<stdio.h>
#define DAYS_PER_WEEK 7
int main()
{
int totaldays;
int weeks, days;
printf("enter the days:\n");
scanf("%d", &totaldays);
weeks = totaldays / DAYS_PER_WEEK;
days = totaldays % DAYS_PER_WEEK;

printf("%d days are %d weeks,%d days.\n", totaldays, weeks, days);
return 0;
}


