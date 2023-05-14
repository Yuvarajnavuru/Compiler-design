#include <stdio.h>
int c=0;
char p[20];
void s();
void l();
void lprime();
void l()
{
	s();
	lprime();
}
void lprime()
{
	if(p[c]==',')
	{
		c++;
		s();
		lprime();
	}
}
    void s()
	{
		if(p[c]=='a')
		c++;
		else if(p[c]=='(')
		{
			c++;
			l();
			if(p[c]==')')
			c++;
			else
			c--;
		}
		else
		printf("\ninvalid expression");
	}
	int main()
	{
		printf("\n implementation of RECURSIVE DECENT PARSER\n");
		printf("\nenter the expression:\n");
		scanf("%s",p);
		s();
		if(p[c]=='$')
		printf("\n string is accepted");
		else
		printf("\n string is rejected");
	}
		

