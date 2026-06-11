/* Enter first number: 15
   Enter second number: 20
   sum of 2 numbers: 35 */
#include <stdio.h>
int main(){
    int x = 0;
    int y = 0;
    int result=0;

    printf("Enter 1st number :");
    scanf("%d",&x);

    printf("Enter 2nd number :");
    scanf("%d",&y);
    result=x+y;
    printf("the sum of 2 numbers is:%d",result);
    return 0;
}