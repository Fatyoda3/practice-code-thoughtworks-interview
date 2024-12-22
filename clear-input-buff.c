#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, int **argv)
{
    int age;

    int *agePointer = &age;

    char name[1024];
    char cBad[100] = {0};
    do
    {
        printf("enter the age ");

        scanf("%s%d", cBad, agePointer);

    } while (age == 0);

    printf("%d ", age);

    // fflush(stdin);// one way to clear the input buffer from any residue

    char cBuff;

    while ('\n' != cBuff)
    {
        cBuff = getchar();
    }
    printf("enter the name ");

    fgets(name, 1024, stdin);

    printf("%s %d ", name, strlen(name));

    return 0;
}
