#include <stdio.h>

typedef struct strr
{

    char name[20];

} strr;

int main()
{
    // strr s1 = {.name = "jack chan"};
    // strr s2 = {.name = "jack "};

    // printf("%s %s\n\n ", s1.name, s2.name);

    // s2 = s1;
    // s2.name[0] = 'k';
    // printf(" s1.name %s\n s2.name %s ", s1.name, s2.name);

    char x[] = "hell";// this is pointer to the array 
    char *y = "hell0";//this is literally pointer to first character in the array 


    x[0] = 'j';

    printf("%s\n", x);

    // *(y + 0) = 'm';
    printf("%s\n", y);
    for (size_t i = 0; i < 5; i++)
    {
        printf("%c", *(y + i));
    }

    return 0;
}