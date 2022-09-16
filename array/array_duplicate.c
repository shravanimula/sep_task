#include<stdio.h>
#define SIZE 20
int main()
{
	int a[SIZE],i,n;
	printf("enter the array of size:\n");
	scanf("%d",&n);
	printf("enter the array of elements is:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int r=0;
	for(i=0;i<n;i++)
	{
		r=r^a[i];
	}
	printf("the missing  duplicate element is:%d\n",r);
}
