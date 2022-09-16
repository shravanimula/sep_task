#include<stdio.h>
#define SIZE 100
void display(int [],int );
void insertion(int [],int );
int main()
{
	int n,i,array[SIZE];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort the array elements are:\n");
	display(array,n);
	insertion(array,n);
	printf("after sort the array elements are:\n");
	display(array,n);
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
void insertion(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j >= 0 && a[j] > temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
