#include <stdio.h>
#include <string.h>
#include <ctype.h>
char x[50];

int main()
{
    puts("enter a string ");

    scanf("%s", x);

    for (int i = 0; i < strlen(x); i++)
    {
        if (strcmp(x[i], "_"))
        {

            printf(" %c", ' ');
        }
        else
            printf("%c", x[i]);
    }

    // printf("%s ", x);

    return 0;
}