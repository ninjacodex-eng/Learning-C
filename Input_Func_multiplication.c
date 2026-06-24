#include <stdio.h>
int multiply(int a,int b);
int main(){
    int a,b;
    printf("Enter a no : ");
    scanf("%d",&a);
    printf("Enter a no : ");
    scanf("%d",&b);
    printf("%d",multiply(a,b));
    return 0;
}
int multiply(int a,int b){
    return a*b;
}
