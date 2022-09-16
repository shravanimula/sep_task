#include<stdio.h>
unsigned int fibanoc_series(int);
int main()
{
	int number,result;
	printf("enter the number:\n");
	scanf("%d",&number);
	fibanoc_series(number);
}
unsigned int fibanoc_series(int n)
{
	int i,a=0,b=1,c=0;
	printf("result of series=%d\t",c);
	for(i=0;i<n;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d\t",c);
	}
}
