#include <stdio.h>  
  

int multiply(int, int);  
  
int main() {   
    int result;  
  
  
    result = multiply(4, 5);  
  
    printf("The Multiplication of Numbers is: %d\n", result);  
    return 0;  
}  
  

int multiply(int a, int b) {  
    return a * b;  
}  
