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
    int a,b,temp1,temp2;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a, &b);
    printf("The value of a and b are %d and %d\n",a,b);
    temp1 = sum(&a,&b);
    temp2 = sub(&a,&b);
    printf("The value of a and b after sum and difference are %d and %d\n",temp1,temp2);
    return 0;
}
