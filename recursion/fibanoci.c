#include<stdio.h>
unsigned int fibanoci(int);
int main()
{
	int number;
	printf("enter the number:\n");
	scanf("%d",&number);
	int result;
	result=fibanoci(number);
	printf("result of fibanoci=%d\n",result);
}
unsigned int fibanoci(int num)
{
	if(num == 0)
		return 0;
	else if(num == 1)
		return 1;
	else
		return (fibanoci(num - 1) + fibanoci(num - 2));
}
