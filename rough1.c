#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a [8] = {3, 1, 0, 5, 2, 7, 6, 4};
    printf(a[a[a[3]]]);
    return 0;
}
