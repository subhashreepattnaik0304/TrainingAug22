#include<stdio.h>
int main()
{
int n, arr[n],i;
printf("enter the size of the array:");
scanf("%d", &n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int rev[n],j=0;
for(i=n-1;i>=0;i--)
{
rev[j]=arr[i];
j++;
}
printf("reversed array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",rev[i]);
}
}

