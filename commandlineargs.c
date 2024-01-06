#include <stdio.h> 

int main(int argc, char const *argv[])

{
    printf("The value of argc is %d\n", argc);    //argv stores this where the .exe file is already stored so the value is 1
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has value of %s \n", i, argv[i]);
    }
    
    return 0;
}

//if we write this - .\commandlineargs.exe ganesh here representing se  class b
//it will show this at next index number in argv 