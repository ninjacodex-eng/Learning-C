#include <stdio.h>
int main(){
    int a;
    printf("enter ur age : ");
    scanf("%d ",&a);
    if (a>=18){
        printf("you are eligible to vote");
    }else{
        printf("you are not eligible to vote");
    }
    return 0;
}