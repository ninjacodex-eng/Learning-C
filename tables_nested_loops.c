#include <stdio.h>
int main(){
    int a;
    printf("enter a no : ");
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=10; j++)
        {
            printf("%d",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
