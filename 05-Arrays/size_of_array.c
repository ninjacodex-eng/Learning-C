#include <stdio.h>
int main(){
    int num[3][3]={
        {1,2,3},
        {6,7,8},
        {3,7,5}
    };
    printf("Size of array = %zu bytes ", sizeof(num));
    return 0;
}
