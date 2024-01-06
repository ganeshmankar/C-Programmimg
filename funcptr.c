#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2));   //For just testing function
    int (*fPtr) (int, int);  //Declaring a function pointer
    fPtr = &sum;  //Creating a function pointer
    int d = (*fPtr) (5, 7);    //Dereferencing a funtion pointer
    printf("The value of d is %d\n", d);
    return 0;
}