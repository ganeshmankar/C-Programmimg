#include<stdio.h>
int main()
{
int age,marks;
printf("Enter your age: \n", age);
scanf("%d", &age);
printf("Enter your marks: \n", marks);
scanf("%d", &marks);
switch (age)
{
case 18:
    printf("Your age is 18\n");
    switch (marks)
    {
    case 50:
        printf("You have 50 marks !");
        break;
    
    default:
        printf("You are fail !");
        break;
    }
    break;
case 21:
    printf("Your age is 21");
    break;
case 25:
    printf("Your age is 25");
    break;
default:
    printf("Your age is not 18, 21 or 25");
    break;
}
}