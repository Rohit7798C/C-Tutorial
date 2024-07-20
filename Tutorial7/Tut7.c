#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    a=34;
    b=6;

 // Arithmetic Operators
    printf("Arithmetic Operators\n");
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n\n",a/b);

// Relational Operators
    printf("Relational Operators\n");
    printf("a==b = %d\n",a==b);
    printf("a-b = %d\n",a!=b);
    printf("a>b = %d\n",a>b);
    printf("a<b = %d\n\n",a<b);

// Logical Operators
    printf("Logical Operators\n");
    printf("a&&b = %d\n",a&&b);
    printf("a||b = %d\n",a||b);
    printf("!a = %d\n",!a);

// Bitwise Operators
// Bitwise AND (&), Bitwise OR (|), Bitwise XOR (^)
// Converts the number into bits and then apply operations.

// Assignment Operators
/*
    =  :- Simple Assigment Operator
    += :- Add-AND assignment operator
    -= :- Subtract-AND assignment operator
    *= :- Multiply-AND assignment operator
    /= :- Divide-AND assignment operator

*/

// Miscellaneous Operators
// sizeof() :- Returns the size of variable [ sizeof(a); ]
// &   :- Returns the address of variable [  &a;  ]
// *   :- Pointer to a variable  [ *a; ]
// ?:  :- Conditional Operator [   if? then : otherwise   ]


    return 0;
}
