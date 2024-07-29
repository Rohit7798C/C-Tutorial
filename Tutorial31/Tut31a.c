// Call by Value

#include <stdio.h>

int sum(x,y){
    return x+y;
}

int main()
{
    int a = 34,b = 22;
    int s = sum(a,b);
    printf("The sum is %d",s);

    // Here values of a and b get copied into x and y , therefore only x and y can be changed
    // and it will not affect the values of a and b
    // This is called 'Call By Value'.
    return 0;
}