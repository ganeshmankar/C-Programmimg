#include <stdlib.h>   //TO USE DYNAMIC MEMORY ALLOCTION FUNCTIONS

int main()
{
    //malloc
    int n;
    printf("Enter the size of array you want: \n");
    scanf("%d", &n);
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));    //syntax
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is %d\n", i, ptr[i]);
    }
    
    
    
    return 0;
}