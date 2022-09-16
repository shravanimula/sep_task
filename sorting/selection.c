#include<stdio.h>
#define SIZE 100
void display(int [],int);
void selectionsort(int [],int );
int main()
{
	int array[SIZE],i,n;
	printf("enter the array size is :\n");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort the array elements are:\n");
	display(array,n);
	selectionsort(array,n);
	printf("after sort the array elemnts are:\n");
	display(array,n);
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
void selectionsort(int a[],int n)
{
	int min,i,j,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min] > a[j])
				min=j;
		}
			if(min != i)
			{
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
	}
}
