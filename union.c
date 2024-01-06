#include <stdio.h>
#include <string.h>

union Student //in union it will give only one value correctly whose size is bigger then others  or the last one line idk why :)
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    union Student s1;

    s1.fav_char = 'u';
    //printf("The fav_char is %c \n", s1.fav_char);  //if we write like this it will give everything fine

    s1.marks = 45;
    //printf("The marks is %d \n", s1.marks);

    s1.id = 1;
    //printf("The id is %d \n", s1.id);

    strcpy(s1.name, "Ganesh");
    //printf("The name is %s \n", s1.name);

    printf("The fav_char is %c \n", s1.fav_char);       //if we write like this it will give only one correct
    printf("The marks is %d \n", s1.marks);
    printf("The id is %d \n", s1.id);
    printf("The name is %s \n", s1.name);




    return 0;
}