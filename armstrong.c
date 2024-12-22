#include <stdio.h>
#include <stdlib.h>
#define populate()               \
    for (int i = 0; i < 10; i++) \
    *(i + cubeCache) = i * i * i

void findArmstrongUpto();

int cubeCache[10];

int main()
{
    populate();

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d   ", cubeCache[i]);
    }

    findArmstrongUpto(100);
    return 0;
}

void findArmstrongUpto()
{

    long n = 1000;

    printf("enter the value of n: ");

    scanf("%ld", &n);

    // printf("%d ", n);
    if (n > 100000)
    {
        printf("can't process this number ");
        return;
    }

    for (long i = 0; i <= n; i++)
    {
        long temp = 1;
        long sum = 0;
        long hold = i;

        while (temp)
        {
            if (i < 10)
            {
                sum = i;
                temp = hold % 10;
                hold /= 10;
            }
            else if (i < 1000)
            {
                temp = hold % 10;
                hold /= 10;
                sum += cubeCache[temp];
            }
            else if (i < 10000)
            {
                temp = hold % 10;
                hold /= 10;
                sum += cubeCache[temp] * temp;
            }

            else if (i < 100000)
            {
                temp = hold % 10;
                hold /= 10;
                sum += cubeCache[temp] * temp * temp;
            }
            /*  else if (i < 1000000)
             {
                 temp = hold % 10;
                 hold /= 10;
                 sum += cubeCache[temp] * cubeCache[temp];
             } */
        };

        if (sum == i)
        {
            printf("armstrong detected     %20d \n", sum);
        }
    }
}