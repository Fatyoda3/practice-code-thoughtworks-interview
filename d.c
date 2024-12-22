#include <stdio.h>

#define jelly 55


#if jelly > 54
#undef jelly
#define jelly 2000

#endif

int main(int argc, char **argv)
{
    printf("%d ", jelly);

    return 0;
}