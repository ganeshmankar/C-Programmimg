#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:\n",a);
    scanf("%d",&a);
    printf("Enter second number:\n",b);
    scanf("%d",&b);
    printf("The sum is %d\n",a+b);
    a=100;
    b=10;
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n",a/b);
    printf("a%b = %d\n",a%b);
    const float c=11.4; //we cannot change its value again..if we change it it will gimme error
    printf("%15.5f",c);
    return 0;
}