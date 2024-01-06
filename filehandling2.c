#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("abc.txt", "r");
    
    //for reading
    // char c = fgetc(ptr);
    // printf("The character that i read was: %c\n", c);
    // c = fgetc(ptr);
    // printf("The character that i read was: %c\n", c);

    // char str[34];
    // fgets(str, 5, ptr);               //always add an extra for null character
    // printf("The string we want to see is: %s\n", str);

    //for writing - it will clear previous data
    // ptr = fopen("abc.txt", "w");
    // fputc('o',ptr);
    // fputs("This is Ganesh", ptr);

    //In these e+, w+, a+ we can do both read and write simultaneously
 
    // ptr = fopen("abc.txt", "r+");   //it will start to take place from start and will get replaced until it finished
    // fputc('o',ptr);
    // fputs("This is Ganesh", ptr);   

    // ptr = fopen("abc.txt", "w+");   //it will remove prvs data
    // fputc('o',ptr);
    // fputs("This is Ganesh", ptr);   

    ptr = fopen("abc.txt", "a+");   // it will append thar means previous data will not be deleted and each time we run this program it will add again and again
    fputc('o',ptr);
    fputs("This is Ganesh", ptr);   


    fclose(ptr);   //so that other programs can also open this file

    return 0;
}