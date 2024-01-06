#include <stdio.h>

int main()
{
    FILE *ptr = NULL;  //good thing to do
    char string[64] = "This content is for File Handling topic";

    //Reading a file 
    // ptr = fopen("abc.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n", string);

    //Writing a file - It will delete porevious content and will add the new content
    // ptr = fopen("abc.txt", "w");
    // fprintf(ptr, "%s\n", string);

    //Append functn - It will not delete orevious content and will add the new content
    ptr = fopen("abc.txt", "a");
    fprintf(ptr, "%s\n", string);
    return 0;
}