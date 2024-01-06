/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/



#include <stdio.h>  //we can also make functions
int main()
{

    for (int i = 1; i < 10; i++)
    {

        int press, n;
        printf("For Triangular Star Pattern Press 1\nFor Reversed Triangular Star Pattern Press 2\n");
        scanf("%d", &press);
        printf("Enter the number you want star pattern of: \n");
        scanf("%d", &n);

        switch (press)
        {
        case 1:
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 2:
            for (int i = 1; i <= n; i++)
            {
                for (int j = n; j >= i; j--)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        default:
            break;
        }
    }

    return 0;
}
