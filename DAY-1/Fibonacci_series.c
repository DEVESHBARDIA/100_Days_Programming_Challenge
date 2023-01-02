#include<stdio.h>
int main()
{
	int i,num,a=0,b=1,c=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		a = b;
		b = c; 	
		printf("%d\t",c);
		c = a + b;
	}
	return 0;
}
