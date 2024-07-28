// Fibonacci Series using iteration

#include <stdio.h>

int main()
{

    while (1)
    {
        int n;
        int t1 = 0, t2 = 1, next_term;
        printf("\nEnter the number of terms upto which you want the fibonacci series : ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Wrong input, please try again!!\n");
            continue;
        }
        printf("The required fibonacci series is : ");
        if (n == 1)
        {
            printf("%d ", t1);
        }
        else if(n>=2)
        {
            printf("%d %d ", t1, t2);
            for (int i = 3; i <= n; i++)
            {
                next_term = t1 + t2;
                printf("%d ", next_term);
                t1 = t2;
                t2 = next_term;   
            }
        }
    }
    return 0;
}
