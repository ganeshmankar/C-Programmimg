#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    return 0;
    // array[0] = 230;  if you change any value here it gets reflected in main also
}


void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr+i));
    }
    *(ptr + 2) = 1234;

}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
        
    }
    
}


int main()
{
    //int arr[] = {23, 13, 3, 4};
    int arr[][2] = {{1, 2}, {3, 4}};
    // printf("The value at index 0 of the array is %d", arr[0]);
    // func1(arr);
    // printf("The value at index 0 of the array is %d", arr[0]);
    // func2(arr);
    // printf("\n");
    // func2(arr);

    func3(arr);



    return 0;
}