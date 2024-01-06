#include <stdio.h>
int main()
{
    int exam;
    printf ("Which Subject you have clear\n", exam);
    printf ("You have clear maths then press 1\n", exam);
    printf ("You have clear science then press 2\n", exam);
    printf ("You have clear both subjects then press 3\n", exam);
    scanf ("%d",&exam);
    
    if (exam==1)
    {
        printf("you won 15 rupee");
    }
    
    else if (exam==2)
    {
        printf("you won 15 rupee");
    }

    else if (exam==3)
    {
        printf("you won 45 rupee");
    }
    return 0;
}