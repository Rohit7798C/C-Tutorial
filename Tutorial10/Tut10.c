#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your age : ");
    scanf("%d",&age);

    printf("You have entered %d as your age\n",age);

    if(age>=18){
        printf("You are allowed to vote!");
    }
    else if(age>=10){
        printf("You are between 10 to 18 and you can vote for kids!!");
    }
    else if(age>=3){
        printf("You are between 3 to 10 and you can vote for babies!!");
    }
    else{
        printf("You cannot Vote!");
    }
    // else statement is not compulsory
    return 0;
}
