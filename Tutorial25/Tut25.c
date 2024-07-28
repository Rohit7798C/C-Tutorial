// Fibonacci Series using recursion 

#include<stdio.h>

int fibonacci(int num){
    if(num==1){
        return (num-1);
    }
    else if(num==2){
        return (num-1);
    }
    else{
        return (fibonacci(num-1)+fibonacci(num-2));
    }
}

int main()
{
    while(1){
        int n;
        printf("\nEnter the number of terms upto which you want the fibonacci series : ");
        scanf("%d",&n);
        printf("The required fibonacci series is : ");
        for(int i=1;i<=n;i++){
            printf("%d ",fibonacci(i));
        }
    }
    return 0;
}
