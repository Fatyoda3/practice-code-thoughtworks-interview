#include <stdio.h>
#include <stdlib.h>

#define arrSize(arr) sizeof(arr) / sizeof(arr[0])

void insert(int arr[], int size, int value, int indexToInsertAt);
void delete(int arr[], int size, /* int value,  */ int indexToDelAt);

void LinearSearch(int arr[], int size, int key);

int BinarySearch(int arr[], int size, int key);
void display(int arr[], int size);

int main()
{
    int arr[] = {12, 14, 25, 29, 35, 66, 78, 99, 101, 103, 112};
    /*    {

           display(arr, arrSize(arr));
           int arr[5] = {1, 2, 3, 4, 5};
           display(arr, arrSize(arr));
       } */
    // insert(arr, arrSize(arr), 44, 4);
    display(arr, arrSize(arr));
    /*   void *k = (void *)0;

      printf("%d ", k); */
    // delete (arr, arrSize(arr), 1);
    // display(arr, arrSize(arr));

    // printf("%d ", BinarySearch(arr, arrSize(arr), 103));

    int *calArr = calloc(22, sizeof(int));

    for (size_t i = 0; i < 22; i++)
    {
        *(calArr + i) = i * i;
    }

    for (size_t i = 0; i < 22; i++)
    {
        printf("%d %d ", i, *(calArr + i));
        puts("");
    }

    // printf("\n%d ", sizeof(calArr)/sizeof(calArr[0]));

    return 0;
}
int BinarySearch(int arr[], int size, int key)
{
    int mid, lo = 0, hi = size;

    while (lo < hi)
    {
        mid = lo + (hi - lo) / 2;
        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            // if (arr[mid] >= key) this is extremely dumb
            lo = mid + 1;

        else
            // if /* (arr[mid] <= key) */
            hi = mid;
    }

    return -1;
}
//@loop_invariant
void LinearSearch(int arr[], int size, int key)
{
    for (size_t i = 0; i < size; i++)
    {
        if (*(arr + i) == key)
        {
            printf("\e[1;35m %d\e[0m found at index \e[1;35m %d \n", key, i);
            return;
        }
    }
    printf("\e[0;32m key \e[1;34m %d \e[0;32m not found in the array \e[0m \n", key);
}

void insert(int arr[], int size, int value, int indexToInsertAt)
{
    for (int i = size - 1; i > indexToInsertAt - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[indexToInsertAt] = value;
}

void delete(int arr[], int size, /*  int value,  */ int indexToDelAt)
{
    for (int i = indexToDelAt; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = 0;
}

void display(int arr[], int size)
{
    printf("\e[0;36m___________________________________________________________\n");
    for (int i = 0; i < size; i++)

        printf("\e[1;33m\e[4;36m \e[33m arr[\e[4;36m%d\e[33m] =>\e[0;32m %d \n", i, arr[i]);
    printf("\e[0;36m___________________________________________________________\n");
}