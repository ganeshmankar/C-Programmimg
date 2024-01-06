#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 300)
    {
        printf("Welcome to Code With Harry\n");
        i2 = malloc(10000 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter a situation of memory leak
    }
    return 0;
}
