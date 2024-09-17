#include<stdio.h>
int search(int arr[],int n,int x);
{
for(int i=0;i<n;i++){
if(arr[i] == target){
return i;
}
int main(){
int arr[] = {2,4,1,0,4};
int n = sizeof(arr)/sizeof(arr[0]);
int target = 7;
int result = search(arr,n,target);
if(result ==-1){
printf("not found\n");
}
else{
printf("found at index %d\n",result);
}
return 0;
}
}
