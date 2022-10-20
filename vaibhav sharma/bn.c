#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,digitcount=0,digit,on;
	printf("enter a no.:");
	scanf("%d",&n);
	on=n;
	while(n>0)
	{ 
	n=n/10;
	digitcount++;
	}
	n=on;
	while(n>0)
	{ 
	digit=n%10;
	sum=sum+pow(digit,digitcount);
	n=n/10;
	}
	if(sum==on)
	printf("%d is a armstrong number",on);
	else
	printf("%d is not a armstrong number",on);
	return 0;
	}
