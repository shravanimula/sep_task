#include<stdio.h>
unsigned long int fact(int);
int main()
{
	int number;
	printf("enter the number:\n");
	scanf("%d",&number);
	int result;
	result=fact(number);
	printf("result of factorial is=%d\n",result);
}
unsigned long int fact(int num)
{
	if(num==0 | num==1)
		return 1;
	else
		return (num*fact(num-1));
}
