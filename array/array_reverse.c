#include<stdio.h>
#define SIZE 100
void reverse(int [],int);
int main()
{
	int array[SIZE],i,n;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before reverse the array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	printf("\n");
	reverse(array,n);
}
void reverse(int a[],int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("after reverse the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

