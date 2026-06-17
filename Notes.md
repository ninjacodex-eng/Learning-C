C Programming Notes 📝


Personal notes by ninjacodex | Learning journey documented from scratch




1) Hello World — The Basics

c#include <stdio.h>
int main(){               // main function — int is the datatype along main func()
    printf("Hello world \n");   // \n helps to break line and dont let casual use
    return 0;
}
/* this is a cmt */


2) Data Types

TypesData TypesBasic Data Typeint, char, float, doubleDerived Data Typearray, pointer, structure, unionEnumeration Data TypeenumVoid Data Typevoid

Data Type Examples

c#include <stdio.h>
int main(){
    char name[]  = "Michel Bravo";
    int age      = 24;
    char grade   = 'A';
    float value  = 3.14;
    printf("Name  - %s\n", name);     // %s  = for string
    printf("Age   - %d\n", age);      // %d  = for integer
    printf("Grade - %c\n", grade);    // %c  = for single character
    printf("Pi    - %.2f\n", value);  // %.2f = upto 2 decimal points
    return 0;
}


NOTE: each and every placeholder like %d etc can only be used for a specific data type



PlaceholderUse%sstring%dinteger%csingle character%.2ffloat upto 2 decimal points%uunsigned integer value


3) Variables

Invalid Variable Names


int 1stNumber;   → Starts with a digit
float my-salary; → Contains a hyphen (-)
char int;        → Same as a C keyword
int double;      → Same as a C keyword
float my$var;    → Contains an unsupported special character


Types of C Variables


Static variable: A variable that retains its value throughout the program lifetime even after the function ends
Automatic variable: A variable that exists only while a function is running and is destroyed when the function ends



4) scanf() Function

scanf() is utilized to take input from the user. It reads the input data from the console.

scanf("format string", argument_list);


Format string: defines the input type and includes format specifiers like %d, %c, %s, %f etc
argument_list: provides the addresses of variables (by using &) where the input values will be stored


c// Example 1 — cube of a number
#include <stdio.h>
int main(){
    int x;
    printf("enter a no :");
    scanf("%d", &x);
    printf("the cube of number is :%d", x*x*x);
    return 0;
}

// Example 2 — sum of two numbers
#include <stdio.h>
int main(){
    int x = 0;
    int y = 0;
    int result = 0;
    printf("Enter 1st number :");
    scanf("%d", &x);
    printf("Enter 2nd number :");
    scanf("%d", &y);
    result = x + y;
    printf("the sum of 2 numbers is:%d", result);
    return 0;
}


5) if-else and switch

if-else

Featureif Statementif-else Statementif-else if ladderPurposeExecutes a block if condition is trueExecutes one block if true, another if falseChecks multiple conditions sequentially, executes block for first true condition


NOTE: if if if = checks ALL conditions every time
NOTE: if else if = stops at first true condition = more efficient 🤝



c// Example 1 — even or odd
#include <stdio.h>
int main(){
    int a = 0;
    printf("Enter a no : ");
    scanf("%d", &a);
    if (a%2 == 0){
        printf("even no");
    } else {
        printf("odd no");
    }
    return 0;
}

// Example 2 — largest of 3 numbers (using && which literally means AND in C)
#include <stdio.h>
int main(){
    int a, b, c;
    printf("enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c){
        printf("%d is the largest number", a);
    } else if (b>=a && b>=c){
        printf("%d is the largest number", b);
    } else {
        printf("%d is the largest number", c);
    }
    return 0;
}

// Example 3 — grade checker
#include <stdio.h>
int main(){
    int a = 0;
    printf("enter your marks : ");
    scanf("%d", &a);
    if (a>=0 && a<=39){
        printf("You got a F");
    } else if (a>=40 && a<=89){
        printf("You got a C");
    } else {
        printf("You got a A");
    }
    return 0;
}

Nested if — two ways to write same thing

c// way 1
if (a > 0){
    if (a > 100){...}
}

// way 2 — cleaner
if (a > 0 && a > 100){...}
else if (a > 0){...}


NOTE: so u dont write a>0 till a>100



switch

switch statement is a flow control structure that enables us to run several code segments based on the value of a given expression


NOTE: switch's syntax is cleaner but i cant use it to set conditions as u can do in if-else if-else chain. Also switch executes faster.



c// Example 1 — basic switch
#include <stdio.h>
int main(){
    int a = 0;
    printf("enter a number : ");
    scanf("%d", &a);
    switch(a){
    case 1:
        printf("the number is 1");
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

// Example 2 — calculator using switch
#include <stdio.h>
int main(){
    int a, b;
    char x;
    printf("Enter an operator (+,-,/,*): ");
    scanf("%c", &x);
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
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


6) Loops

do-while loop

Executes the block first, then checks the condition — so it always runs at least once.

c// Example 1 — print 1 to 5
#include <stdio.h>
int main(){
    int a = 1;
    do{
        printf("%d", a);
        a++;
    }
    while(a <= 5);
    return 0;
}

// Example 2 — 5 times table
#include <stdio.h>
int main(){
    int a = 1;
    do{
        printf("%d\n", a*5);
        a++;
    }
    while(a <= 10);
    return 0;
}

// Example 3 — any number's times table (user input)
#include <stdio.h>
int main(){
    int i = 1, num = 0;
    printf("Enter a no : ");
    scanf("%d", &num);
    do{
        printf("%d\n", num*i);
        i++;
    }
    while(i <= 10);
    return 0;
}


Notes will keep updating as I learn more — follow the journey on GitHub and LinkedIn
