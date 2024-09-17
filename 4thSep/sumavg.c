#include<stdio.h>
int main()
{
int arr[10], i, n;
double average;
double sum;
printf("enter number:\n");
scanf("%d", &n);

for(i=0; i<n; ++i)
{
printf("enter number%d:", i+1);
scanf("%d", &arr[i]);
sum += arr[i];
}
average = (double) sum/n;
printf("sum=%.21f", sum);
printf("average=%.21f", average);
return 0;
}

