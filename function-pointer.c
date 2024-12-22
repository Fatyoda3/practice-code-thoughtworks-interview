#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *getString(char *x, char *y);
int main(int argc, char **argv)
{
    char *x = getString("shivang", "hey");

    printf("%s %d\n", x, strlen(x));
    for (int i = 0; i < strlen(x)+1; i++)
    {

        if (*(x + i) == '\0')
        {
            puts(" \\0 ");
        }
        else
            printf("%c ", *(x + i));
    }
    return 0;
}

char *getString(char *x, char *y)
{
    char *buffer = malloc(sizeof(char) * ((strlen(x) + strlen(y)) + 2));

    sprintf(buffer, "%s-%s", x, y);
    return buffer;
}