#include <stdio.h>
#include <stdlib.h>

int functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main()
{
    //Case 1: Deallocation of memory block
    int *ptr = (int*) malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr);      //ptr is now a dangling pointer

    //Case 2: Function returning local variable address
    int *dangptr = functionDangling();     //ptr is now a dangling pointer

    int *danglingptr3;
    //Case 3: If variable goes out of scope
    {
        int a = 12;

        danglingptr3 = &a;
    }
    //Here variable a goes out of scope which means danglingptr3 is pointing to a location which is freed and hence danglingptr3 is now a dangling pointer

    return 0;
}