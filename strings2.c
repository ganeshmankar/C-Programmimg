#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Ganesh";
    char s2[] = "Mankar";
    char s3[54];

    printf("Thw strcmp for s1, s2 returned %d", strcmp(s1, s2));    //compare by ASCII table if both are same then it will give 0 else 1. here G comes first then M so it gives -1...else it will give 1.
    //puts(strcat(s1,s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: ");
    // puts(strrev(s2));
    // strcpy(s3, strcat(s1, s2));       //it will copy s1 and s2 in s3
    // puts(s3);



    
    return 0;
}