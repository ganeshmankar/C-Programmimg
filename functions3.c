#include <stdio.h> //with arguments with return value
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }

    printf("%c", '*');
}

int main()
{
    printstar(7);

    return 0;
}
