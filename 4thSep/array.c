#include<stdio.h>
int main()
{
int arr[4] = {2,9,5,10};
int i;
printf("using index:\n");
for(i=0; i<4; i++)
{
printf("arr[%d] = %d\n", i, arr[i]);
}

printf("using address:\n");
for(i=0; i<4; i++)
{
printf("*(arr+%d) = %d\n", i, *(arr+i));
}
return 0;
}

