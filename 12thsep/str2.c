#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char **name;
    name = (char **)malloc(4*sizeof(char *));
    name[0] = (char *) malloc(7*sizeof(char));
    strncpy(name[0],"Subhi",6);
    name[1] = (char *) malloc(5*sizeof(char));
    strncpy(name[1],"Disha",4);
    name[2] = (char *) malloc(4*sizeof(char));
    strncpy(name[2],"Krsna",3);
    name[3] = (char *) malloc(6*sizeof(char));
    strncpy(name[3],"Radharani",5);
    for(int i = 0; i < 4; i++)
        printf("%s\n", name[i]);
     for(int i = 0; i < 4; i++)
        free(name[i]);
    free(name);
return 0;
}
