#include <stdio.h>

int b = 34; //global variable      //local>>>global so it will print local one
int func1(int b)
{
    static int myvar; //initialise by 0 but you can give any value you want  //it wont start from base value it will increse and remember the previous value also static var always want an constant value it won't accept any func and it will give error
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    //printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);  //address will be different for both functions i.e b variables are different in both function they are copied
    return b + 10;
    ;
}
int main()
{
    int b = 344; //local variable
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    printf("The value of func1 is %d", val);

    return 0;
}