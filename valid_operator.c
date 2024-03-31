//valid operators

#include<stdio.h>
main()
{
	char s[5];
	printf("\nEnter any operator :- ");
	gets(s);
	switch(s[0])
	{
		case '>':
			if(s[1]=='=')
				printf("\nGreater than or equal to ");
			else
				printf("\nGreater than");
			break;
		
		case '<':
			if(s[1]=='=')
				printf("\nLess than or equal to ");
			else
				printf("\nLess than");	
			break;
			
		case '=':
			if(s[1]=='=')
				printf("\nEqual to ");
			else
				printf("\nAssignment");	
		
		case '!':
			if(s[1]=='=')
				printf("\nNot equal ");
			else
				printf("\nBit not");
			break;
				
		case '&':
			if(s[1]=='&')
				printf("\nLogical AND ");
			else
				printf("\nBitwise AND");
			break;
		
		case '|':
			if(s[1]=='|')
				printf("\nLogical OR ");
			else
				printf("\nBitwise OR");
			break;
		
		case '+':
			printf("\nAddition");
			break;
		
		case '-':
			printf("\nSubtraction");
			break;
			
		case '*':
			printf("\nMultiplication");
			break;
		
		case '/':
			printf("\nDivision");
			break;
		
		case '%':
			printf("\nModulus");
			break;
		
		default:
			printf("\nNot an operator");
			break;
	}
}