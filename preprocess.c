#include <stdio.h>
// #include "abc.c"    //it will include given file and will give erroe since there are two same function name int main()
#define PI 3.142
#define SQUARE(r) r*r

int main()
{
    float a = PI;
    int r = 4;
    printf("The value of a is %f\n", a);  
    printf("The area of the circle is %f\n", PI * SQUARE(r));

    printf("File name is %s\n", __FILE__);
    printf("Todays's Date is is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("Line number is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    
    return 0;
}