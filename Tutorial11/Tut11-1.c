#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    printf("Enter Your Marks : ");
    scanf("%d",&marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Marks are 45!!");
            break;
        
        default:
            printf("Marks are not 45!!");
            break;
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;
    
    default:
        printf("Age is not 3,13,23\n");
    }                   
    return 0;
}
