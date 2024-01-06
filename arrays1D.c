#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element of the array:\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element of array is %d\n", i ,marks[i]);
    }
    
}