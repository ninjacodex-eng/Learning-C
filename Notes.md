# C Programming Notes

A collection of my beginner C programming notes and examples.

---

# Contents

1. Hello World Program  
2. Data Variations
3. scanf() Function
4. Variables
5. Data Types
6. if-else and switch
7. Loops

---

# Hello World Program

A basic typical Hello World program in C language.

```c
#include <stdio.h>

int main(){
    printf("Hello World\n");
    return 0;
}
```

### Notes

* `main()` is the main function where program execution starts.
* `int` is the return datatype of the function.
* `\n` is used to move to the next line.
* `return 0;` indicates successful execution.

Comment example:

```c
/* this is a comment */
```

---

# 1) DATA Variations

## Integer Data Type

```c
#include <stdio.h>

int main(){
    int age = 25;
    int year = 2025;

    printf("ur age is\n%d", age);
    printf("\nthe year is\n%d", year);

    return 0;
}
```

## Float Data Type

```c
float age = 23.2;
```

## Example Using Multiple Data Types

```c
#include <stdio.h>

int main(){
    char name[] = "Michel Bravo";
    int age = 24;
    char grade = 'A';
    float value = 3.14;

    printf("Name - %s\n", name);
    printf("Age - %d\n", age);
    printf("Grade - %c\n", grade);
    printf("Pi - %.2f\n", value);

    return 0;
}
```

### Common Placeholders

```text
%s   = string
%d   = integer
%c   = single character
%.2f = float upto 2 decimal places
%u   = unsigned integer
```

Note: Each placeholder can only be used with its corresponding datatype.

---

# 2) scanf() Function

The `scanf()` function is used to take input from the user.

### Syntax

```c
scanf("format string", argument_list);
```

### Components

* Format string defines the type of input.
* Argument list contains addresses of variables using `&`.

Example:

```c
#include <stdio.h>

int main(){
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("The cube of number is: %d", x*x*x);

    return 0;
}
```

### Note

`&` is called the address-of operator.

`scanf()` needs the memory address of a variable so that it can store the user's input inside that variable.

### Example

```c
#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    int result = 0;

    printf("Enter 1st number: ");
    scanf("%d", &x);

    printf("Enter 2nd number: ");
    scanf("%d", &y);

    result = x + y;

    printf("The sum of 2 numbers is: %d", result);

    return 0;
}
```

---

# 3) Variables

## Invalid Variable Names

```c
int 1stNumber;
float my-salary;
char int;
int double;
float my$var;
```

Reasons:

* Cannot start with a digit.
* Cannot contain hyphens.
* Cannot use reserved keywords.
* Cannot contain unsupported special characters.

## Types of Variables

### Static Variable

A variable that retains its value throughout the program lifetime even after the function ends.

### Automatic Variable

A variable that exists only while a function is running and gets destroyed when the function ends.

---

# 4) Data Types

| Types                 | Data Types                       |
| --------------------- | -------------------------------- |
| Basic Data Type       | int, char, float, double         |
| Derived Data Type     | array, pointer, structure, union |
| Enumeration Data Type | enum                             |
| Void Data Type        | void                             |

---

# 5) if-else and switch

## Even or Odd Program

```c
#include <stdio.h>

int main(){
    int a = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }

    return 0;
}
```

## AND Operator

`&&` in C literally means AND.

### Largest of Three Numbers

```c
#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c){
        printf("%d is the largest number", a);
    }
    else if(b >= a && b >= c){
        printf("%d is the largest number", b);
    }
    else{
        printf("%d is the largest number", c);
    }

    return 0;
}
```

## Important Note

```text
if if if
```

Checks ALL conditions every time.

```text
if else if
```

Stops at the first true condition and is usually more efficient.....

### Grade Program

```c
#include <stdio.h>

int main(){
    int a = 0;

    printf("Enter your marks: ");
    scanf("%d", &a);

    if(a >= 0 && a <= 39){
        printf("You got F");
    }
    else if(a >= 40 && a <= 89){
        printf("You got C");
    }
    else{
        printf("You got A");
    }

    return 0;
}
```

## Nested Conditions

```c
if(a > 0){
    if(a > 100){
        ...
    }
}
```

Can sometimes be simplified depending on the condition.

---

# SWITCH Statement

A switch statement executes different code blocks based on the value of an expression.

```c
#include <stdio.h>

int main(){
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("The number is 1");
            break;

        case 2:
            printf("The number is 2");
            break;

        case 3:
            printf("The number is 3");
            break;

        default:
            printf("The number is neither 1, 2 nor 3");
    }

    return 0;
}
```

### Notes

* Switch syntax is cleaner.
* Switch cannot handle conditions like `a > 10`.
* Switch may be faster in some situations because the compiler can use a jump table internally.

---

# 6) LOOPS

## DO-WHILE LOOP

The body executes first and then the condition is checked.

### Example

```c
#include <stdio.h>

int main(){
    int a = 1;

    do{
        printf("%d\n", a);
        a++;
    }
    while(a <= 5);

    return 0;
}
```

### Example

```c
#include <stdio.h>

int main(){
    int a = 1;

    do{
        printf("%d\n", a * 5);
        a++;
    }
    while(a <= 10);

    return 0;
}
```

---

## WHILE LOOP

The condition is checked before execution.

### Example

```c
#include <stdio.h>

int main(){
    int b = 6;
    int i = 1;

    while(i < 11){
        printf("%d X %d = %d\n", b, i, b * i);
        i++;
    }

    return 0;
}
```
# For Loops in C

A `for` loop is used when we know exactly how many times we need to repeat a block of code (iterate).

### Standard Syntax
```c
for (initialization; condition; update) {
    // Code to be executed
}
```

### Basic For Loop Example
This example prints even numbers up to 10 by incrementing the variable by 2 in each iteration.

```c
#include <stdio.h>

int main() {
    for (int a = 0; a <= 10; a += 2) {
        printf("This number is - %d\n", a);
    }
    return 0;
}
```

---

## Nested Loops

A nested loop is simply a loop placed inside another loop. 
* The **outer loop** triggers the inner loop. 
* The **inner loop** must finish all its iterations before the outer loop advances to its next step.

### Syntax
```c
for (/* outer initialization, condition, update */) {
    for (/* inner initialization, condition, update */) {
        // inner loop statements
    }
    // outer loop statements
}
```

### Nested Loop Example: Multiplication Table
This program takes a number as input and prints the multiplication tables from 1 up to that number.

```c
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    // Outer loop controls the current table being printed
    for (int i = 1; i <= a; i++) {
        // Inner loop prints the 10 multiples for the current table
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j); // \t adds a tab space for cleaner output
        }
        printf("\n"); // Move to the next line after completing one table
    }
    return 0;
}
```

---

## Infinite Loops

An infinite loop runs endlessly because its condition never evaluates to false. It will continue running until the program is manually terminated or a `break` statement is encountered.

### Syntax
```c
for ( ; ; ) {
    // Code that runs infinitely
}
```

### Infinite Loop Example

```c
#include <stdio.h>

int main() {  
    int a = 1;
    for (;;) {
        printf("It is an infinite for loop iteration: %d\n", a);
        a++;
    }
    return 0;
}
```

> **Pro-Tip:** You can also create infinite loops using `while` and `do-while` loops by simply passing `1` (which represents "true" in C) as the condition. 
> Example: `while (1) { /* infinite code */ }`



