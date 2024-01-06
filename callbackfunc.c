#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int average(int x, int y)
{
    return x / y;
}

void GreetingGm(int (*fptr)(int, int))
{
    printf("Good Morning user!\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

void GreetingGn(int (*fptr)(int, int))
{
    printf("Good Night user!\n");
    printf("The average of 100 is %d\n", fptr(100, 2));
}

int main()
{
    int (*ptr)(int, int);

    // ptr = sum;
    // GreetingGn(ptr);

    ptr = average;
    GreetingGn(ptr);

    return 0;
}