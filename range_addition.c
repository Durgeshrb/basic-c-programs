//addition of given range
#include<stdio.h>

void main()
{
	int a,b,sum=0;
	i=a;

	printf("enter range for addition of them");
	scanf("%d%d",&a,&b);

	while (i>=a && i<=b)
	{
		sum=sum+i;
	}
	printf("addition of given range is :%d ",sum);
}
