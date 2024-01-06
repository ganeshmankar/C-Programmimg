#include <stdio.h>
#include <stdlib.h>   //TO USE DYNAMIC MEMORY ALLOCTION FUNCTIONS

int main()
{
    //calloc
    int n;
    printf("Enter the size of array you want: \n");
    scanf("%d", &n);
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));               //syntax
    for (int i = 0; i < n; i++)                       //if ya dont give any input value still it will initialise by 0 and print 0 (try this out by commenting this loop!)
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