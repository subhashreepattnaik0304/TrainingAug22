#include<stdio.h>
main()
{
int score;
printf("enter your score:\n");
scanf("%d", &score);

if(score>=90 && score<=100)
  printf("Grade is A\n");
if(score>=80 && score<=89)
  printf("Grade is B\n");
if(score>=70 && score<=79)
  printf("Grade is C\n");
if(score>=60 && score<=69)
  printf("Grade is D\n");
if(score<60)
  printf("Grade is F\n");

return 0;
}

