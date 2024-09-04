#include<stdio.h>
int main()
{
char character;

printf("enter a character:\n");
scanf(" %c", &character);

switch (character){ 
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
printf(" %c is a vowel\n",character);
break;
default:
printf(" %c is a consonant\n",character);
}
return 0;
}

