#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	int array[n-1];
	printf("enter the elements are:\n");
	for(i=0;i<n-1;i++)
		scanf("%d",&array[i]);
	printf("the elements are:\n");
	for(i=0;i<n-1;i++)
		printf("%d\t",array[i]);
	int ele,sum=0;
	for(i=0;i<n-1;i++)
		sum=sum+array[i];
	ele=(n*(n+1))/2-sum;
	printf("\nthe missing element:%d\n",ele);
}

