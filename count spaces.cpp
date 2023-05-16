#include<stdio.h>
int main()
{
	int blank_char,tab_char,new_line;
	blank_char=0;
	tab_char=0;
	new_line=0;
	int c;
	printf("number of blank,tab,newline:\n");
	printf("input few words/tab/newlines\n");
	for(;(c==getchar())!=EOF;)
	if(c==' ')
	{
		printf("%d\n",blank_char);
	}
	if(c=='\t')
	{
		printf("%d\n",tab_char);
	}
	if(c=='\n')
	{
		printf("%d\n",new_line);
	}

}
