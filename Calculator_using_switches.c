#include <stdio.h>
int main(){
    int a, b;
    char x;
    printf("Enter an operator (+,-,/,*): ");
    scanf("%c",&x);
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    switch(x){
    case '+':
        printf("%d + %d = %d\n", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a-b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a*b);
        break;
    case '/':
        if (b != 0)
            printf("%d / %d = %d\n", a, b, a/b);
        else
            printf("Error! division cant be done by 0");
        break;
    default:
        printf("Invalid operator");
    }
    return 0;
}
