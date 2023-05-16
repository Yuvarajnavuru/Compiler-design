
#include<stdio.h>
int main()
{
    char text[30];
	printf("\nWrite a C Program to Identify Whether a Given Line is a Commentor Not.");
    printf("\n\nEnter Text : ");
    gets(text);
    if(text[0] == '/')
    {
    	printf("\n it is a comment line");
    }
        else if(text[1] == '/') {
            printf("\nIt is a Comment.");
        } 

    else
    {
        printf("\nIt is Not a Comment.");
    }
}
1 comment on commit edfb38c
