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
	int i,j,temp,min,max;
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
	printf("\nafter sort the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	min=a[0];
	max=a[n-1];
	printf("min=%d\nmax=%d\n",min,max);
}
