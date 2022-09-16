#include<stdio.h>
#define PI 3.14
int main()
{
	int r,area;
	printf("enter the radius:\n");
	scanf("%d",&r);
	area=PI*r*r;//here  calucalte the area
	printf("result=%d\n",area);
	#ifdef a
	printf("a is defined\n");
	#else
	printf("a is not defined\n");
	#endif
}	
