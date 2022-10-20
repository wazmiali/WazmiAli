#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(int i=0; i<10; i++){
	printf("enter the value is a[%d]\n",i);
	scanf("%d",&a[i]);
}
	for(int i=0; i<10; i++){
		sum=sum+a[i];
	
	}
	printf("sum of each element is %d",sum);
return 0;
	
}
