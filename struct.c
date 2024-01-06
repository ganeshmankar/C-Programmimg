#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int rollno;
    int marks;
    char fav_char;
}
//Ganesh, Satsh, Ajinkya   //we can also write here like this without writing in main()
;

// struct Student Ganesh, Satish, Ajinkya;  //Global Variable
// void print()
// {
//     printf("%s", Ganesh.name);
// }

int main()
{
    struct Student Ganesh, Satish, Ajinkya;     //local variable

    strcpy(Ganesh.name, "Ganesh Mankar"); //string ("") will get copied in Ganesh.name
    Ganesh.rollno = 21;
    Ganesh.marks = 48;
    Ganesh.fav_char = 'T';
    printf("Name is %s\nRoll no. %d\n", Ganesh.name, Ganesh.rollno);
    printf("Ganesh got %d marks\n", Ganesh.marks);
    printf("\n");

    strcpy(Satish.name, "Satish Jawarkar");
    Satish.rollno = 2;
    Satish.marks = 50;
    Satish.fav_char = 'J';
    printf("Name is %s\nRoll no. %d\n", Satish.name, Satish.rollno);
    printf("Satish got %d marks\n", Satish.marks);
    printf("\n");

    strcpy(Ajinkya.name, "Ajinkya Bhadirge");
    Ajinkya.rollno = 13;
    Ajinkya.marks = 49;
    Ajinkya.fav_char = 'S';
    printf("Name is %s\nRoll no. %d\n", Ajinkya.name, Ajinkya.rollno);
    printf("Ajinkya got %d marks\n", Ajinkya.marks);
    printf("\n");

    //print();

    return 0;
}