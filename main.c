#include <stdlib.h>

#include <stdio.h>
#define cube(c) c *c *c

#define arrLength(arr) sizeof(arr) / sizeof(arr[0])
void swap(int *a, int *b);
void swap2(int *a, int *b);
// void swap3(int **a, int **b);
void swapArr(int a[]);
typedef struct myInt
{

    unsigned k;
    long long int h;

} myInt;

int main()
{

    int a = 66;
    int b = 45;

    int *aa = &a;

    myInt arr[10];

    int len = arrLength(arr); /* (sizeof(arr) / sizeof(*(arr + 0))); */
    printf("%d \n", len);
    for (int i = 0; i < 10; i++)
    {
        arr[10].h = i * i;
        arr[10].k = i * i * i;
    }

    printf(" main fn --- %p %p \n ", &a, &b);
    // printf("%p  %d ", aa, *aa); // dereferencing the  pointer using the * operator
    // swap(&b, &a);
    // printf(" %d %d ", a, b);
    // int ad[] = {1, 2, 3};
    int *bb = &b;
    // swapArr(ad);
    // swap3(&aa, &bb);
    // swap2(&a, &b);
    printf(" main fn --- %p %p \n ", &a, &b);

    // printf("%d %d ", *(ad + 0), *(ad + 1));
    printf("%d %d ", 2, cube(2));
    return 0;
}
void swap2(int *a, int *b)
{

    // this code is modifying the copy of the reference pointer variables stored locally in the scope of this function

    /*  main fn before swap fn--- 0061FF18 0061FF14
    in the swap before 0061FF18 0061FF14
     in the swap after 0061FF14 0061FF18
 main fn after swap fn --- 0061FF18 0061FF14  */
    printf("in the swap before %p %p \n", a, b);

    int *temp = a;

    a = b;

    b = temp;

    printf(" in the swap after %p %p \n", a, b);
}
void swap(int *a, int *b)
{

    int temp = *a;

    *a = *b;

    *b = temp;
}
/* void swap3(int **a, int **b)
{
    printf("in the swap before %p %p \n", a, b);

    int **temp = a;

    *a = *b;
    *b = *temp;

    printf("in the swap before %p %p \n", a, b);
} */
void swapArr(int a[])
{
    int temp = a[0];

    a[0] = a[1];

    a[1] = temp;
}