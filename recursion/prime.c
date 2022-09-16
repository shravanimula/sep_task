#include<stdio.h>
void prime(int);
int main()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	prime(num);
}
void prime(int n)
{
	int i,flag;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else
			flag=1;
	}
	if(flag==1)
		printf("given number is prime:%d\n",n);
	else
		printf("given number is not prime:%d\n",n);
}
