//insert twonumbers as input and perform diffrent operations
#include<stdio.h>

void main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	
	printf("\n***Addition***");
	int sum;
	sum=a+b;				
	printf("\nAddition is :%d",sum);

	printf("\n***subtraction***");
	int sub;
	sum=a-b;
	printf("\nsubtraction is :%d",sub);

	printf("\n***Multiplication***");
	int mul;
	sum=a*b;
	printf("\nMultiplication is :%d",mul);

	printf("\n***Division***");
	int div;
	sum=a/b;
	printf("\nDivision is :%d",div);
}