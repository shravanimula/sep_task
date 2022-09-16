#include<stdio.h>
#define SIZE 100
void min_max(int [],int);
int main()
{
	int array[SIZE],n,i;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	min_max(array,n);
}
void min_max(int a[],int n)
{
	int i,temp,min,max;
	min=a[0];
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] > max)
		{
			max=a[i];
		}
		if(a[i] < min)
		{
			min=a[i];
		}
	}
	printf("min=%d\nmax=%d\n",min,max);
}
