#include <stdio.h>
//Typecasting syntax :
// (type) value;
int main()
{
    // int a=3;
    // float b=54;
    // printf("The value of b is %d\n", (int) b);     here we can get the value even after we use %d

    // float b=54/5;
    // printf("The value of b is %f", b);         here we will get 10.000000 coz 54 and 5 are int(int int ka calculation int mein hi aata hain)

    float b = (float)54 / 5;
    printf("The value of b is %f\n", b);
    return 0;
}