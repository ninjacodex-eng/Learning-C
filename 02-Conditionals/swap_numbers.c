#include <stdio.h>
int main(){
    int a,b,swap;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("After swap : %d,%d",a,b);
    return 0;
}
