#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidIdentifier(char *str)
{
    // Check if first character is a letter or underscore
    if (!isalpha(str[0]) && str[0] != '_')
        return 0;
    for (int i = 1; i < strlen(str); i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isValidIdentifier(str))
        printf("%s is a valid identifier\n", str);
    else
        printf("%s is not a valid identifier\n", str);

    return 0;
}
