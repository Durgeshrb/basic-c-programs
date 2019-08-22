//Enter *two* numbers as input and print smaller an greater
#include<stdio.h>

void main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("\n%d is greater %d ",a,b);
	}
	else
	{
		printf("\n%d is greater %d ",b,a);	
	}
		
}