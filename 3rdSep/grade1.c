#include<stdio.h>
main()
{
float percentage;

printf("enter percentage:\n");
scanf("%f", &percentage);

if(percentage>=90)
  printf("Grade A\n");
else if(percentage>=80)
  printf("Grade B\n");
else if(percentage>=70)
  printf("Grade C\n");
else if(percentage>=60)
  printf("Grade D\n");
else
  printf("Fail\n");
return 0;
}

