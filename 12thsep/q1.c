#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

void removeDuplicates(char *input){
char *words[MAX_WORDS];
int wordcount = 0;
char *token = strtok(input, "|");

while(token != NULL){
int isDuplicate = 0;
for(int i = 0; i<wordcount; i++){
if(strcmp(words[i], token) == 0)
{
isDuplicate = 1;
break;
}
}
if(!isDuplicate){
words[wordcount] = token;
wordcount++;
}
token = strtok(NULL, "|");
}
for(int i = 0; i<wordcount; i++){
printf("%s", words[i]);
if(i<wordcount - 1)
{
printf("|");
}
}
printf("\n");
}

int main()
{
char input[MAX_LENGTH] = "apple|orange|banana|apple|grape";
removeDuplicates(input);
return 0;
}
