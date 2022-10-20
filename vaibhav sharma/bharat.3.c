#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",& b);
	printf("enter the value of c");
	scanf("%d",& c);
	if(a>b && a>c)
	{
		printf("a greater then b && a great then c");
	}
	else if(b>a && b>c)
	{
		printf("b greater then a && b great then c");	
	}
	else {
	printf("c is greater");
}
}
