// Quiz question: To find the sum and difference of the variable inputs and store them into 
// the same variables respectively.

#include<stdio.h>

int sum(int *x, int *y){
    return *x + *y;
}

int sub(int *x, int *y){
    return *x - *y;
}

int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a, &b);
    
    a = sum(&a,&b);
    b = sub(&a,&b);
    printf("The value of a and b are %d and %d",a,b);
    return 0;
}