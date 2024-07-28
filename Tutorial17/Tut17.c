#include <stdio.h>
int main()
{
    // label:
    //     printf("We are inside label!!\n");
    //     goto end;          //skips the hello world statement and directly goes to the end statement

    // printf("Hello World!!");
    // goto label;
    // end:
    //     printf("We are at the end!!");
    
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number , enter 0 to exit : ");
            scanf("%d",&num);

            if(num==0){
                goto end;
            }
        } 
    }
    end:

    return 0;
}
