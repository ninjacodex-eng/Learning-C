#include <stdio.h>
int swap(int a,int b);
int main (){
    int a=1;
    int b=2;
    swap(a,b);
    return 0;
}
int swap (int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
