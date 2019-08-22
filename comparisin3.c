//Enter *three* numbers as input and print smaller an greater
#include<stdio.h>

void main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\n%d is greater %d and %d ",a,b,c);
	}
	elseif(a<b && b>c)
	{
		printf("\n%d is greater %d and %d ",b,a,c);	
	}
	else
	{
		printf("\n%d is greater %d and %d ",c,b,a);
	}
		
}