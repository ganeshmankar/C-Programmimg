#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d is as follows:\n", n);
    
    // printf("%d X 1 = %d\n", n, n*1);
    // printf("%d X 2 = %d\n", n, n*2);


    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    return 0;
}