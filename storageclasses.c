#include <stdio.h>                //sorage classes - auto, extern, static, register

//   #include "abcdef.c"   by using this we can include that file in this program

int sum = 897;  //it is a global variable and always initialised by 0

//also there is static storage class for info visit stativvar.c file 

int myfunc(int a, int b)
{
    // auto int sum;             //it is always auto storage class even if you dont write 'auto'
    extern int sum;              //by using extern the function will accept the value of global variable
    // sum = a+b;
    return sum;
}

    // int sum = 343;
int main()
{
    //Declaration - Telling the compiler about variable (No space reserved)
    //Definition - Declaration + Space Reservation

    //register int sum = myfunc(3, 5);  //using this register storage class we can save this variable in CPU sorage class so that we can access it more fastly

    int sum = myfunc(3, 5);
    printf("The sum is %d\n", sum);  //if ya comment out previous line then it will give sum as 0

    return 0;
}