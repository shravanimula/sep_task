#include<stdio.h>
#define SIZE 100
void sort(int [],int);
int main()
{
	int array[SIZE],i,n;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort the array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	sort(array,n);
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nafter sort the array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

