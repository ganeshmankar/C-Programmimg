#include <stdio.h>
int main()
{
    // int a = 34;
    // int* ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d", ptra+1);    //1 int size is 4
    int arr[] = {1,2,3,4,5,6,7};
    printf("Value at position 3 of array is %d\n", arr[3]);
    printf("The address of first element of array is %d\n", &arr[0]);
    printf("The address of first element of array is %d\n", arr);        //&arr[0] = arr
    printf("The address of second element of array is %d\n", &arr[1]);
    printf("The address of second element of array is %d\n", arr + 1);   //&arr[1] = arr + 1
    
    //arr++.....This line will throw an error

    printf("The value at address of first element of array is %d\n", *(&arr[0]));
    printf("The value at address of first element of array is %d\n", arr[0]);
    printf("The value at address of first element of array is %d\n", *(arr));
    printf("The value at address of second element of array is %d\n", *(&arr[1]));
    printf("The value at address of second element of array is %d\n", arr[1]);
    printf("The value at address of second element of array is %d\n", *(arr + 1));
 

    return 0;
}