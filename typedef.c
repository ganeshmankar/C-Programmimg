#include <stdio.h>
#include <string.h>

typedef struct Student //here we use typedef to change struct Student to std (we can use both)
{
    int id;
    int marks;

} std;

int main()
{
    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 4;
    // printf("Value of a is %d", a);

    //struct Student s1, s2;      //it will also work

    // std s1, s2;
    // s1.id = 21;
    // s2.id = 18;
    // printf("The id of s1 is %d\n", s1.id);
    // printf("The id of s2 is %d\n", s2.id);

    //int* a, b;       //in this only a is considered as pointer and b is consider as only normal integer
    typedef int* intptr;    
    intptr a, b;       //after doing this it consider both as pointer
    int c = 12;
    a = &c;
    b = &c;


    return 0;
}