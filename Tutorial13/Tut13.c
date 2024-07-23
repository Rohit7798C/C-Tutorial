// do-while loop

#include <stdio.h>
int main()
{
    int n, index = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < n);
    return 0;
}
