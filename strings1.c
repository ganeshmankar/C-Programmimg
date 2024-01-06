#include <stdio.h>

void printstr(char str[])
{
    int i = 0; //initialise
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char name[6] = "ganesh";  //if we give 5 in place of 6 there wont be null character so it will not give right output
    // char str1[] = {'g', 'a', 'n', 'e', 's', 'h', '\0'};      //\0 is a null character to show a valid string...if we dont write \0 then it will give us an garbage char/value
    // //printf("%c", name[2]);
    // printstr(str1);
    // printf("\n");
    // printstr(name);

    char str[34];
    gets(str);    //to get from user
    printf("Using custom function printstr\n");
    printstr(str);
    printf("Using printf %s\n", str); //use %s
    printf("Using puts: \n");
    puts(str);
    return 0;
}