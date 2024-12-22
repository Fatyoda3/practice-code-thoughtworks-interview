#include <stdio.h>
// #pragma once
#define arrSize(arr) sizeof(arr) / sizeof(arr[0])
void sort(int arr[], int length);
#define listData                  \
    printf("this is the data\n"); \
    printf("222 55 5 0  2 22 ");

int main()
{
    int my_arr[] = {1, -12, -52, 72, 23, 0, 44, 65, 2, 4, 5, 3, 2};

    int len = arrSize(my_arr);

    sort(my_arr, len);

    for (size_t i = 0; i < len; i++)
    {
        printf("%d ----> %d\n", i, *(my_arr + i));
    }
    listData;

    return 0;
}

void sort(int arr[], int length)
{
    int smallest = 0;
    int temp = 0;
    for (size_t i = 0; i < length - 1; i++)
    {
        smallest = i;

        for (size_t j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[smallest])

                smallest = j;
        }
        if (smallest != i)
        {

            temp = arr[smallest];

            arr[smallest] = arr[i];

            arr[i] = temp;
        }
    }

    // int l = arrSize(arr);
}