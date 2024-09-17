#include<stdio.h>
int main()
{
int arr[50];
int i, max, min, n;
printf("enter numbers:\n");
scanf("%d", &n);
printf(" %d elements are in the array:\n", n);
for(i = 0; i<n; i++)
{
printf("elements %d :", i);
scanf("%d", &arr[i]);
}
max = arr[0];
min = arr[1];

for(i = 1; i<n; i++)
{
if(arr[i]>max)
{
max = arr[i];
}
if(arr[i]<min)
{
min = arr[i];
}
}
printf("maximum element is:%d\n", max);
printf("minimum element is:%d\n", min);
}
