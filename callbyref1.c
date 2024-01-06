#include <stdio.h>

int valueChange(int *a)
{
    *a = 340;
}
int main()
{
    int a = 34, b = 12;
    printf("The value of a is %d\n", a);
    valueChange(&a);
    printf("Now the value of a is %d", a);
    return 0;
}