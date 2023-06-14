%{
#include<stdio.h>
#include<string.h>
char word [] = "geeks";
int count = 0;
%}
%%
[a-zA-Z]+    { if(strcmp(yytext, word)==0)
                   count++; }
.  ;        
%%
int yywrap(){}

int main()
{
        yyin=fopen("input.txt", "r");
        yylex();
        printf("%d", count);
  }
