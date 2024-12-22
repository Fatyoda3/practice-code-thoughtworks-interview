#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *x;
char *y = "hello world";

int main()
{
    x = malloc(sizeof(char) * (strlen(y + 1)));

    for (char i = 0; i < strlen(y); i++)
    {
        *(x + i) = *(y + i);
    }
    *(x + strlen(y)) = '\0';

    printf("%s ", x);

    char my[] = "shivang";
    printf("%d ", strlen(my));

    return 0;
}