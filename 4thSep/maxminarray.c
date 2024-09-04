#include<stdio.h>
void findminmax(int arr[], int n)
{
int i;
int minelement = INT_MIN, maxelement = INT_MAX;
for(i = 0; i<n; i++)
{
if (arr[i] <minelement)
{
minelement = arr[i];
}
if(arr[i] > maxelement)
{
maxelement = arr[i];
}}
printf("maximum:%d", maxelement);
printf("\n");
printf("minimum:%d", minelement);
return;
}

int main()
{
int arr[] = {1,9,6,4};
int n = sizeof(arr)/sizeof(arr[0]);
findminmax(arr, n);
return 0;
}Write a program to find the maximum and minimum elements in an array of integers.
