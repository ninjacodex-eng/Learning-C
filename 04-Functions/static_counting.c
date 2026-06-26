#include <stdio.h>
void count();
int main(){
    count();
    count();
    count();
    return 0;
}
void count(){
    static int num = 0;
    num++;
    printf("%d\n",num);
}
