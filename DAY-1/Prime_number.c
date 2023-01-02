#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n % i == 0)
		{
			count++;
		}
	}
	
	if(count == 2)
	{
		printf("Prime Number!");
	}
	else
	{
		printf("Not Prime number!");
	}
	return 0;
}
