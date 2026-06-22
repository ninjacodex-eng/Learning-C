#include <stdio.h>  
  
// Function Declaration  
int multiply(int, int);  
  
int main() {   //main function  
    int result;  
  
    // Calling the add function  
    result = multiply(4, 5);  
  
    printf("The Multiplication of Numbers is: %d\n", result);  
    return 0;  
}  
  
// Function Definition  
int multiply(int a, int b) {  
    return a * b;  
}  
