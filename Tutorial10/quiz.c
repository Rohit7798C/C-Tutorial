#include<stdio.h>
int main()
{
    int m,s;
    printf("Are you passed in Maths(Press 1 if pass else 0) : ");
    scanf("%d",&m);
    printf("Are you passed in Science(Press 1 if pass else 0) : ");
    scanf("%d",&s);

    if(m==1 && s==1){
        printf("Congrats you received a gift of Rs.45!!");
    }
    else if(m==1 && s==0){
        printf("Congrats you received a gift of Rs.15!!");
    }
    else if(m==0 && s==1){
        printf("Congrats you received a gift of Rs.15!!");
    }
    else{
        printf("Better Luck Next Time!!");
    }
    return 0;
}
