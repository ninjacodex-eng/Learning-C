#include <stdio.h>
int main(){
    int a=0;
    printf("enter a number : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
       printf("the numebr is 1");
       break;
    case 2:
       printf("the number is 2");
       break;
    case 3:
       printf("the number is 3");
       break;
    default:
       printf("the number neither is 1,2 nor 3");
    }
    return 0;
}
