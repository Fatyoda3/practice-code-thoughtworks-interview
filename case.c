#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{

    char grade;

    printf("enter a char : ");

    scanf("%c", &grade);

    switch (grade)
    {
    case 'a':
        printf("something love \n");
        break;
    case 'b':

        printf("something love \n");
        printf("something love \n");

    case 'c':
        printf("something love \n");
        printf("something love \n");
        printf("something love \n");
        break;

    case 'd':
        printf("something love \n");
        printf("something love \n");
        printf("something love \n");
        printf("something love \n");
        break;
    default:
        puts("so much gay love ");
    }

    return 0;
}