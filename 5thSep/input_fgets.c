#include<stdio.h>
#include<string.h>

#define MAX 5
int main()
{

	char ch[MAX];
	int len;
	printf("Enter a string\n");
	
	if(fgets( ch, MAX, stdin)  != NULL)
	{
		len = strlen(ch);
		if(ch[len-1] == '\n')
		ch[len-1] = '\0';
		printf("The Input String is\n " );
		if(!fputs(ch, stdout))
		{
		printf("Error in fputs\n");
		return 2;
		}
		//printf("\n\n");
		return 0;
	}
	else
	{
		printf("Error in fgets\n");
		return 1;
	}

}
