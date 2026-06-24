#include <stdio.h>
int main(){
    int i=1;
    int a=0;
    printf("Enter a no : ");
    scanf("%d",&a);
    do
    {
        printf("%d X %d = %d\n",a,i,a*i);
        i++;
    }
    while(i<=10);
    return 0;
}
