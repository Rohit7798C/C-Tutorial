#include <stdio.h>

int sum(int a,int b);

void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*');
    }
}

int takenumber(){
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    return i;
}
int main()
{
    int a, b, c;
    a = 9, b = 87;
    c = sum(a, b);
    printf("The sum is : %d\n",c);

    printstar(7);

    c = takenumber();
    printf("The number entered is : %d",c);

    return 0;
}
int sum(int a,int b){
    return a+b;
}