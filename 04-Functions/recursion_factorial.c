#include <stdio.h>
int factorial(int n){
    if(n==0)
     return 1;
    else
     return n*factorial(n-1); // factorial is written to create a loop like system
}
int main(){
    int x;
    printf("enter a no : ");
    scanf("%d",&x);
    printf("%d",factorial(x));
}
