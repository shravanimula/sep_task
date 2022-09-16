#include<stdio.h>
void prime_range(int ,int);
int main()
{
	int min,max;
	printf("enter the minimum number:\n");
	scanf("%d",&min);
	printf("enter the maximum number:\n");
	scanf("%d",&max);
	prime_range(min,max);
}
void prime_range(int start,int end)
{
	int i,j,flag;
	for(i=start;i<=end;i++)
	{
		flag=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				flag++;
			}
		}
	if(flag==2)
		printf("given number is prime number=%d\n",i);
	}
}
