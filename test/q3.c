#include <stdio.h>

int missing_element(int arr[], int n) 
{
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}


int main()
{
int n;
printf("enter the number of elements:\n");
scanf("%d", &n);
int arr[n];
printf("enter %d elements:\n", n);
for(int i = 0; i<n ; i++)
{
scanf("%d", &arr[i]);
}
int missingnumber = missing_element(arr, n+1);
printf("the missing number is:%d\n", missingnumber);
return 0;
}
