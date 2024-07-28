// Solution to Fibonacci series using Recursive and Iterative approach problem given in Lecture 25.

#include<stdio.h>

int fib_recursive(int n){
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}

int fib_iterative(int n){
    int a=0,b=1;

    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    
    return a;
}


int main()
{
    int number;
    printf("Enter a number to find Fibonacci series : ");
    scanf("%d",&number);
    printf("The value of Fibonacci number at position no. %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of Fibonacci number at position no. %d using recursive approach is %d\n",number, fib_recursive(number));
    return 0;
}