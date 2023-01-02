#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100];
	int len,flag=0;
	printf("Enter a string: ");
	scanf("%s",str);
	len = strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("%s is not Palindrome!",str);
	}
	else
	{
		printf("%s is Palindrome!",str);
	}
	return 0;
}
