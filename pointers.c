#include <stdio.h>
int main()
{
    int a=21;
    int* ptra=&a;
    int* ptr2 = NULL;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("The address of pointer to a is %p\n", &ptra);    //address of ptra
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of some garbage %p\n", ptr2);      //address of a
    printf("The address of a is %p\n", ptra);             //address of a which we stored in ptra
    return 0;
}