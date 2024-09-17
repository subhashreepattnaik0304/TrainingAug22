 #include<stdio.h>
 int main()
 {
 int arr[4];
 int i;
 printf("enter elements:\n");
 for(i = 0; i<4; i++)
 {
 scanf("%d",&arr[i]);
 }

 printf("array elements using index:\n");
 for(i = 0; i<4; i++)
 {
 printf("%d",arr[i]);
 }

printf("\n");

printf("array elements using address:\n");
for(i = 0; i<4;i++)
{
printf("%d", *(arr+i));
}
printf("\n");
return 0;
}
