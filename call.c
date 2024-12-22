#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct newInt
{

    int max;
    double max2;
} newInt;

int main()
{
    int size = 10;
    time_t tock = time(0);

    // printf("%ld\n\n ", tock);
    /*  unsigned */ long long max = 1e9;
    /* unsigned */ long long int sum = 0;
    /*     for (long long int i = 0; i < max; i++)
        {
            sum += i;
        }


     */

    sum = ((max * max) + max) / 2; /* max / 2 * (2 * 0 + (max - 1) * 1); */

    printf("%lld ", sum);
    
    sum = max / 2 * (1 + max);

    printf("%lld ", sum);

    newInt *newIntArray = calloc(size, sizeof(newInt));
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        // srand(time(NULL));
        (newIntArray[i]).max = (rand() % 16 - 2) + 2;
        (newIntArray[i]).max2 = (float)((rand() / 17));
    }

    /* for (int i = 0; i < size; i++)
    {
        printf("\e[1;34m max %d \e[0m  max2 %lf\n\n", (newIntArray[i]).max, (newIntArray[i]).max2);
    } */

    // int *arr = malloc(sizeof(int) * size);

    // for (int i = 0; i < size; i++)
    // {
    //     *(arr + i) = size - i;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("\e[0m  \e[1;36m arr[%d]  \e[4;34m %15d \n", i, *(arr + i));
    // }
    // // int *j = arr;
    // // free(arr);
    // // printf("%d  %d ", j, arr);
    // arr = realloc(arr, sizeof(int) * (size + 5));
    // // realloc syntax ?? realloc(dereference of pointer to the dynamically allocated memory , new size   )
    // // this is non destructive so original data is not lost

    // for (size_t i = size; i < size + 5; i++)
    // {
    //     *(arr + i) = 9;
    // }

    // printf("\n\n");

    // for (int i = 0; i < size + 5; i++)
    // {
    //     printf("\e[0m  \e[1;36m arr[%d]  \e[4;34m %15d \n", i, *(arr + i));
    // }

    // // malloc does not zeros the allocated space
    // // free does not removes the data; only indicates this space is free to use, for other business
    // // realloc resize a block of memory; can cause memory leak if new size is smaller than previous size
    // //  calloc zeros the memory before allocating it somewhat slower than malloc as overhead for cleanup

    // int *calArr = calloc(size, sizeof(int));

    // for (int i = 0; i < size; i++)
    // {
    //     *(calArr + i) = size * size - i * i;
    // }
    // for (int i = 0; i < size; i++)
    // {

    //     {
    //         printf("\e[0m  \e[1;36m arr[%d]  \e[4;34m %15d \n", i, *(calArr + i));
    //     }
    // }
    newInt *x = malloc(sizeof(newInt));
    /*   x = (int)x;
      x = 5222; */

    // printf("%d ", x);
    return 0;
}