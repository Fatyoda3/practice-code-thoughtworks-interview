#include <stdio.h>
#define l sizeof(arr) / sizeof(arr[0])
void sort(int arr[], int len);

int main(int argc, char **argv)
{

    int arr[] = {16, 12, 34, 22, 6, 72, 9, 25, 0, 12};

    sort(arr, l);
        for (size_t i = 0; i < l; i++)
        {
            printf("%d  %d\n ", i, arr[i]);
        }

    return 0;
}

void sort(int arr[], int len)
{
    for (size_t i = 0; i < len - 1; i++)
    {
        int smallest = i;
        for (size_t j = i + 1; j < len; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }
        if (smallest != i)
        {
            int t = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = t;
        }
    }
}