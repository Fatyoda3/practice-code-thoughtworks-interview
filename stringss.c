#include <stdio.h>

#include <string.h>

int main(int argc, char **argv)
{

    char *x = "hello world";

    printf("%d    ", sizeof(x) / sizeof(x[0]));
    // printf("%d ", strlen(x));
    for (size_t i = 0; i < /* (sizeof(x) / sizeof(x[0])) - 1  */ strlen(x); i++)
    {
        /* code */
        printf("%c", *(x + i) - 32);
        if (*(x + i) == ' ')
        {
            printf(" ");
        }
    }

    return 0;
} // strlen return the length of the string without the null terminator \0