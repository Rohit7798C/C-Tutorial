/*
Printing star (*) Patterns in C program.
Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reverse triangular star pattern.
Then print the pattern accordingly.

*
**
***
****
*****  -> Triangular star pattern

***** 
****
***
**
*     -> Reverse Triangular star pattern

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Triangular pattern \n");
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Inverted Triangular pattern \n");
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    printf("Pattern 3\n");
    for(int i=0;i<n;i++){
        for( int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Pattern 4\n");
    for(int i = 0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=1;k<=n-i;k++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    printf("Pattern 5\n");
    for(int i = 0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        for(int k=1;k<=n-i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}