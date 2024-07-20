#include<stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
    float b = 7.333;
    // PI = 7.333;     //Cannot do this , since PI is a Constant.
    // printf("%f\n",PI);

    // const float b = 7.333;
    // b = 7.22;       //Cannot reassign the value of b, since b is a constant.

    // printf("Hello World!!\n");
    // printf("The value of a is : %d and the value of b is %.6f\n",a,b);
    // printf("The value of a is : %d and the value of b is %10.5f\n",a,b);
    // printf("The value of a is : %d and the value of b is %-18.5f this is spacing",a,b);

    // printf("My Backslash \\n %f",PI);
    printf("My Backslash \a %f",PI);

    // Escape Sequences in C
    //   \n ,\t,\a,\b,\f,\r,\t,\v,\\,\',\",\?,\nnn,\xhh,\0

    // Comments in C
    // - Single Line Comments
    /* Multi-line Comments */

    return 0;
}
/*
IMP Format Specifiers

    %c -> Character
    %d -> Integer
    %f -> float 
    %l -> long
    %lf -> double
    %Lf -> long double

*/