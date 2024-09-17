#include<stdio.h>
#include<string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100
#define MAX_WORD_LENGTH 50

int countchar(const char *str, char ch)
{
int count = 0;
while(*str)
{
if(*str == ch)
{
count++;
}
str++;
}
return count;
}


int countword(const char *str, const char *word){
int count = 0;
const char *p = str;
while ((p = strstr(p, word)) != NULL)
{
count++;
p += strlen(word);
}
return count;
}


int main()
{
 char strings[MAX_STRINGS][MAX_LENGTH];
 int n;
 char ch;
 char word[MAX_WORD_LENGTH];
 int totalcharcount = 0;
 int totalwordcount = 0;

 printf("enter number of strings:\n");
 scanf("%d", &n);
 getchar();

 for(int i = 0; i<n; i++)
 {
 printf("enter string %d:\n", i+1);
 fgets(strings[i], MAX_LENGTH, stdin);
 size_t len = strlen(strings[i]);
 if(len > 0 && strings[i][len-1]== '\n')
 {
  strings[i][len-1] = '\0';
 }
 }

 printf("enter the character to count:\n");
 scanf(" %c", &ch);
 for(int i = 0; i<n; i++)
 {
  totalcharcount += countchar(strings[i], ch);
 }

 printf("enter the word to count:\n");
getchar();
fgets(word, MAX_WORD_LENGTH, stdin);

 size_t len = strlen(word);
 if(len > 0 && word[len - 1] == '\n')
 {
  word[len - 1] = '\0';
 }

 for(int i =0; i<n; i++)
 {
  totalwordcount += countword(strings[i], word);
 }


 printf("total occurances of characters '%c' : %d\n", ch, totalcharcount);
 printf("tota occurances of words '%s' : %d\n",word, totalwordcount);
 return 0;
 }

