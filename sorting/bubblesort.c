#include<stdio.h>
#define size 100
void display(int [],int );
void bubblesort(int [],int);
int main()
{
	int array[size],i,n;
	printf("enter the size of the string:\n");
	scanf("%d",&n);
	printf("enter the array elements are :\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort the array elements are:\n");
	display(array,n);
	bubblesort(array,n);
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
void bubblesort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
