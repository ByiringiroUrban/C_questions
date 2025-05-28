// Names: Byiringiro Urban Bobola
// id: 27150
// date:28 January 2025

// C programing correction of homewrok
// ........................................

// question 1. write a program in C to calculate the value of X which int type 
// x = 4/3 * 29 % 3 - 8 * 69 % 9
#include <stdio.h>

int main() {
    int X;


    X = 4 / 3 * 29 % 3 - 8 * 69 % 9;


    printf("The value of X is: %d\n", X);

    return 0;
}

// question 2. write a program to calculate the area of a circle where r=3.9cm

#include <stdio.h>

int main() {

    float radius, area;
    const float PI = 3.14159; 


    radius = 3.9; 


    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f cm is: %.2f cm²\n", radius, area);

    return 0;
}

// question 3. write a program to check if a number is add or even

#include <stdio.h>

int main() {
    int number;


    printf("Enter an integer: ");
    scanf("%d", &number);


    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

//question 4. write a program to check if a number is positive or negative

#include <stdio.h>

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);


    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

// question 5. write a program to add 3 numbers where the user will enter the value of the variable through the keyboad (scanif)

#include <stdio.h>

int main() {

    int num1, num2, num3, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    
    printf("Enter the second number: ");
    scanf("%d", &num2);

   
    printf("Enter the third number: ");
    scanf("%d", &num3);


    sum = num1 + num2 + num3;

  
    printf("The sum of %d, %d, and %d is: %d\n", num1, num2, num3, sum);

    return 0;
}




// on 05 February 2025 revision 

//example using bitwise operators
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    
    printf("a & b = %d\n", a & b);  // AND operator
    printf("a | b = %d\n", a | b);  // OR operator
    printf("a ^ b = %d\n", a ^ b);  // XOR operator
    printf("~a = %d\n", ~a);        // NOT operator
    printf("a << 1 = %d\n", a << 1); // Left Shift operator
    printf("a >> 1 = %d\n", a >> 1); // Right Shift operator

    return 0;
}

//  corrections of questions in the notes

// Q1. With example differentiate printf and scaf with example

#include <stdio.h>

int main() {
    int num;
    
    // Using printf to display a message
    printf("Enter an integer: ");  // This is an output message
    
    // Using scanf to read user input and store it in variable 'num'
    scanf("%d", &num);  // This reads an integer and stores it in 'num'
    
    // Using printf to display the value entered by the user
    printf("You entered: %d\n", num);  // This displays the value of 'num'
    
    return 0;
}


// Q2. The score in Math:18/20, Programing:16/20,  engish:13/20,
//  display the value of variables, avg, sum. If avg is greater than
//  18, display Grad A, if avg is greater than 16, and less than 18,
//  display Grad B, other cases display Grad C  /4pts

#include <stdio.h>

int main() {
    // Declare variables for each subject score
    int math = 18, programming = 16, english = 13;
    
    // Calculate sum and average
    int sum = math + programming + english;
    float avg = sum / 3.0;  // Using 3.0 to ensure float division
    
    // Display the values of sum and avg
    printf("Sum of scores: %d\n", sum);
    printf("Average score: %.2f\n", avg);
    
    // Display grade based on the average
    if (avg > 18) {
        printf("Grade: A\n");
    } else if (avg > 16 && avg <= 18) {
        printf("Grade: B\n");
    } else {
        printf("Grade: C\n");
    }
    
    return 0;
}

// Q3. Differentiate ternary operators and bit level operators (bitwice) with example /3pts


// Ternary Operator:
// The ternary operator is a conditional operator that allows you to make decisions
//  in a concise manner. It evaluates a condition and returns one of two values
//   depending on whether the condition is true or false. It is written as:



// ternary operator example

#include <stdio.h>

int main() {
    int a = 10, b = 5;
    // Using ternary operator to find the maximum of two numbers
    int max = (a > b) ? a : b; // If 'a' is greater than 'b', max = a, else max = b
    printf("The maximum value is: %d\n", max);
    
    return 0;
}

// Bitwise Operators:
// Bitwise operators are used to perform operations on individual bits of integer data types.
//  They operate at the binary level and allow manipulation of data at the bit level. These
//   include operators like AND (&), OR (|), XOR (^), NOT (~), left shift (<<), 
//   and right shift (>>).

// Bitwise Operators example:

#include <stdio.h>

int main() {
    int a = 12, b = 5;
    
    // Using bitwise AND to find common bits
    int and_result = a & b;  // 1100 & 0101 = 0100 (4 in decimal)
    printf("Bitwise AND result: %d\n", and_result);
    
    // Using bitwise OR to combine bits
    int or_result = a | b;  // 1100 | 0101 = 1101 (13 in decimal)
    printf("Bitwise OR result: %d\n", or_result);
    
    return 0;
}


// Q4. write a program to calculate the value of x which is an int data type. 
// X=23/4*6+3*29%5-2*47%7     /2.5pts

#include <stdio.h>

int main() {
    // Declare the variable x
    int x;

    // Calculate the value of x based on the given expression
    x = 23 / 4 * 6 + 3 * 29 % 5 - 2 * 47 % 7;

    // Display the result
    printf("The value of x is: %d\n", x);

    return 0;
}


// Q5. Write a program to check if the number is even or odd number /2.5pts

#include <stdio.h>

int main() {
    int num;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("The number %d is even.\n", num);
    } else {
        printf("The number %d is odd.\n", num);
    }

    return 0;
}

// Q6. with example differentiate if else and ternary operator /2.5pts

// 1. if-else Example:

#include <stdio.h>

int main() {
    int num = 10;

    // Using if-else to check if the number is positive or negative
    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative or zero.\n");
    }

    return 0;
}


// 2. Ternary Operator Example:

#include <stdio.h>

int main() {
    int num = 10;

    // Using the ternary operator to check if the number is positive or negative
    printf("The number is %s.\n", (num > 0) ? "positive" : "negative or zero");

    return 0;
}


// Q7. Write a program to show how do while loop can be an infinite loop by using
// encrementation  and decrementation  /2.5pts

#include <stdio.h>

int main() {
    int num = 0;

    // Using a do-while loop to create an infinite loop with increment and decrement
    do {
        // Increment the number
        num++;

        // Decrement the number in the same iteration
        num--;

        // Print the value of num (it will remain 0 due to increment and decrement)
        printf("Value of num: %d\n", num);

        // The condition will always be true, creating an infinite loop
    } while (1);  // Condition is always true

    return 0;
}



// nested loops
// question1 
#include <stdio.h>

int main() {
    int i, j;
   for(i = 1; i<=5; i++){
         for(j = 1; j <= 4; j++){
            printf("%d", j);
         }
         printf("\n");
   }

    return 0;
}

// question2

#include <stdio.h>

int main() {
    int i, j;
   for(i = 1; i<=5; i++){
         for(j = 5; j >= 1; j--){
            printf("%d", j);5;
         }
         printf("\n");
   }

    return 0;
}