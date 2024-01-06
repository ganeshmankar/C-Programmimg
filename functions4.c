#include <stdio.h>       //without arguments with return value since we dont use the values of a and b i.e arguments
int takenumber()
{
    int i;
    printf("Enter a number: \n");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = takenumber();
    printf("The entered number is %d\n", c);

    return 0;
}


// void myname()
// {
//     printf("My name is Ganesh");
// }
// int main()
// {
//     printf("What is your name ?\n");
//     myname();
//     return 0;
// }
// here myname() is a function without argument and without return value