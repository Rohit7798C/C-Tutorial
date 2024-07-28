/*

km to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/

#include<stdio.h>

int main()
{
    label:
    printf("\n\nMenu\n");
    printf("1) km to miles\n");
    printf("2) inches to foot\n");
    printf("3) cms to inches\n");
    printf("4) pound to kgs\n");
    printf("5) inches to meters\n");
    printf("6) Exit\n");
    int choice;
    printf("Enter the conversion you want : ");
    scanf("%d",&choice);
    
    float km,mile,inch,foot,cm,pound,kg,m;
    
    switch (choice)
    {
        case 1:
            printf("Enter the unit in km : ");
            scanf("%f",&km);
            printf("Output for miles is : %f miles",km/1.61);
            break;
        case 2:
            printf("Enter the unit in inches : ");
            scanf("%f",&inch);
            printf("Output for foot is : %f foot",inch/12);
            break;
        case 3:
            printf("Enter the unit in cms : ");
            scanf("%f",&cm);
            printf("Output for inches is : %f inches",cm*0.393);
            break;
        case 4:
            printf("Enter the unit in pound : ");
            scanf("%f",&pound);
            printf("Output for kg is : %f kgs",pound * 0.454);
            break;
        case 5:
            printf("Enter the unit in inches : ");
            scanf("%f",&inch);
            printf("Output for meter is : %f meter",inch * 0.0254);
            break;
        
        case 6:
            printf("Exitting the program!!");
            goto end;
            break;

        default:
            printf("Enter a Valid Choice!!");
    }
    goto label;
    end:
    return 0;
}
