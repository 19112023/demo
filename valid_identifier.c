//identifier is valid or not

#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[10];
	int flag, i=1;
	printf("\nEnter an identifier : ");
	gets(a);
	if(isalpha(a[0]))
		flag=1;
	else
	{
		printf("\nNot a valid identifier");
		return 0;
	}
	while(a[i]!='\0')
	{
		if(!isdigit(a[i]) && !isalpha(a[i]))
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag==1)
		printf("\nValid Identifier");
	else
		printf("\nNot a valid identifier");
		
}