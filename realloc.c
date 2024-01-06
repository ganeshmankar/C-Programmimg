#include <stdio.h>
#include <stdlib.h>   //TO USE DYNAMIC MEMORY ALLOCTION FUNCTIONS

int main()
{
    int n;
    printf("Enter the size of array you want: \n");
    scanf("%d", &n);
    
    //malloc
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is %d\n", i, ptr[i]);
    }
    printf("\n");

    //realloc
    printf("Enter the size of new array you want: \n");
    scanf("%d", &n);
    ptr = (int*) realloc(ptr, n*sizeof(int));              //syntax
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the new array is %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}