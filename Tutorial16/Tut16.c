#include <stdio.h>
int main(){
    int i,age;
    for(int i=0;i<10;i++){
        printf("%d\n",i);
        printf("Enter your age : ");
        scanf("%d",&age);

        // if(age>10){
        //     break;
        // }

        if(age>10){
            continue;
        }
        printf("We have not come across any continue statement\n");
    }
    return 0;
} 