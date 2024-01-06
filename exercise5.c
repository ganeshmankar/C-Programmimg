#include <stdio.h>

int valueChange(int *x, int *y)
{
    int temp1, temp2;
    temp1 = (*x + *y);
    temp2 = (*x - *y);
    *x = temp1;
    *y = temp2;
}

int main()
{
    int a = 5, b = 3;
    printf("The value of a is %d and the value of b is %d\n", a, b);
    valueChange(&a, &b);
    printf("Now the value of a is %d and the valur of b is %d", a, b);
    return 0;
}