#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{

    /*  printf("%ld ", time(NULL));
     // _sleep(3);
     printf("%d ", rand() % 6 + 1);
     sleep(2);
     printf("%ld\n ", time(NULL));
     time_t t = time(NULL);
     char *string_time = ctime(&t);
     printf("%s ", string_time);
     srand(time(NULL));
     printf("%d ", RAND_MAX);
     printf("%d ", (rand() % 20) + 1);
     printf("%d ", rand() % 20);
     printf("%d ", rand() % 20);
     printf("%d ", rand() % 20);

     printf("%d ", rand() % 20); */
    srand(time(NULL));
    printf("%d ", rand());

    return 0;
}