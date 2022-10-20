#include<stdio.h>
int main()
{
	int n,r,binnum,r1,rev;
	printf("enter a no.;");
	scanf("%d",&n);
	while(n>0)
{
	r=n%2;
	binnum=binnum*10+r;
	n=n/2;
}
while(binnum>0)
{
	r1=binnum%10;
	rev=rev*10+r1;
	binnum=binnum/10;
}
printf("%d is binnum",binnum);
return 0;
}
