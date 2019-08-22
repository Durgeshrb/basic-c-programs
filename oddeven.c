//odd or even
#include<stdio.h>

void main()
{
	int a;
	printf("enter number\n");
	scanf("%d",&a);
	if(a%2==1)
	{
		printf("given number %d is odd",a);
	}
	else
	{
		printf("given number %d is even",a);	
	}
}