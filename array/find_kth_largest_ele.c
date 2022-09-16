#include<stdio.h>
#define SIZE 100
void kth_largest_num(int [],int,int);
int main()
{
	int array[SIZE],i,n,k;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	printf("enter the number for k:\n");
	scanf("%d",&k);
	kth_largest_num(array,n,k);
}
void kth_largest_num(int a[],int n,int k)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] < a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	for(i=0;i<n;i++)
	{
		if(i==k-1)
			printf("\nthe kth array value is:%d\n",a[i]);
	}
}
