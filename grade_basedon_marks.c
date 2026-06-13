#include <stdio.h>
int main(){
    int a=0;
    printf("enter your marks : ");
    scanf("%d",&a);
    if (a>=0 && a<=39){
        printf("You got a F");
    }else if (a>=40 && a<=89){
        printf("You got a C");
    }else{
        printf("You got a A");
    }
    return 0;
}
