#include<stdio.h>
void display(int [],int);
void quicksort(int [],int,int);
int main()
{
	int array[50],i,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort the array elements are:\n");
	display(array,n);
	quicksort(array,0,n-1);
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
void quicksort(int a[50],int low,int high)
{
//	printf("low=%d\thigh=%d\n",low,high);
	int start,end,pivot,temp;
	if(low < high)
	{
		pivot=low;
		start=low;
		end=high;
		while( start < end)
		{
			while(a[start] <=a[pivot] && start < high)
			start++;
			while(a[end] > a[pivot])
				end--;
			if(start < end)
			{
				temp=a[start];
				a[start]=a[end];
				a[end]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[end];
		a[end]=temp;
		quicksort(a,low,end-1);
		quicksort(a,end+1,high);
	}
}
