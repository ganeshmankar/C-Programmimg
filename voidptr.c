#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;             //by using this it can be of any type int, float at any time thar we want
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));    //if we dont use tyapecasting it will give error coz we havent define the type of void pointer 
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    return 0;
}
