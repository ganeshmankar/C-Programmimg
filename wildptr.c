#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr;    //RIGHT NOW THIS IS A WILD POINTER
    //*ptr = 12;  //THIS IS NOT A GOOD THING TO DO WE SHOULD AMKE IT NULL OR ELSE GIVE IT ADDRESS OF ANY VARIABLE
    ptr = &a;   //NOW IT IS NO LONGER A WILD POINTER
    printf("The value of a is %d\n", *ptr);
    printf("The address of a is %d", ptr);
    return 0;
}