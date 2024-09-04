#include<stdio.h>
#define MINUTES_PER_HOUR 60
int main()
{
int totalminutes;
int hours, minutes;
printf("enter total minutes:\n");
scanf("%d", &totalminutes);
 hours = totalminutes / MINUTES_PER_HOUR;
 minutes = totalminutes % MINUTES_PER_HOUR;
printf("%d minutes are  %d hours and %d minutes\n",totalminutes, hours, minutes);
return 0;
}


