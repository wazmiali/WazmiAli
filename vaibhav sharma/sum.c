#include<stdio.h>
int main()
{
	int n,fact=1,num;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n<0)
	printf("no factorial for negative number");
	else
	{
		while(num>=1)
		fact=fact*num;
		n--;
	}
	printf("fact of %d is %d",num,fact);
	return 0;
}
