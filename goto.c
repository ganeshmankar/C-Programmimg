#include <stdio.h>
int main()
{
    // label:
    // printf("We are inside label!\n");
    // goto end;
    // printf("Hello world!\n");
    // goto label;
    // end:
    // printf("we are end!");

    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter the number, enter 0 to exit: \n");
            scanf("%d", &num);
            if (num==0)
            {
               // break; it will exit only from for loop line 16
               goto end; //it will break all loops in program
            }
            
        }
    }
    end:
}