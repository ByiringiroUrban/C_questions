
// 1 1.Create a simple Multiplication Table Generator using
//  loops in C programming. The program will allow the user to input
  // a number, and it will generate and display the multiplication table for that number,
//  from 1 to 10. This project will demonstrate the use of loops in C, specifically the for loop
#include <stdio.h>

int main() {
    int num, i;
    
    // Ask the user for input
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);
    
    printf("Multiplication Table for %d:\n", num);
    
    // Loop to generate the multiplication table
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}


// 2.create a Simple Invoice Generation System that uses the printf function to display 
// formatted output. The program will accept user input for the details of an invoice (such as the item name,
//  price, quantity, and calculate the total), and display a neatly formatted invoice. 

#include <stdio.h>

int main() {
    char item[50];
    float price;
    int quantity;
    float total;
    
    // Get user input
    printf("Enter item name: ");
    scanf("%s", item);
    
    printf("Enter price: ");
    scanf("%f", &price);
    
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    
    // Calculate total cost
    total = price * quantity;
    
    // Display formatted invoice
    printf("\n==============================\n");
    printf("         INVOICE\n");
    printf("==============================\n");
    printf("Item: %-20s\n", item);
    printf("Price: %-10.2f\n", price);
    printf("Quantity: %-5d\n", quantity);
    printf("------------------------------\n");
    printf("Total: $%-10.2f\n", total);
    printf("==============================\n");
    
    return 0;
}

// 3.create a Menu-Driven Calculator that allows users to perform basic
//  arithmetic operations (addition, subtraction, multiplication, division)
//   using a do-while loop. The program will repeatedly display a menu to 
//   the user, allowing them to choose an operation and perform the calculation.
//    The loop will continue until the user decides to exit

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    do {
        // Display menu
        printf("\n===== Menu-Driven Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform operation based on user choice
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }
        
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed!\n");
                }
                break;
            case 5:
                printf("Exiting calculator. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}
// 4.create a Prime Number Generator program that uses a for loop to
//  find and display all prime numbers within a specified range.
//   The program will prompt the user to input a number,
//  and then it will display all the prime numbers from 1 to that number.

#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    
    // Get user input
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers from 1 to %d:\n", n);
    
    // Loop through numbers and check for primes
    for (int i = 1; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}


// 5.build a Simple Calculator program in C that performs basic arithmetic
//  operations like addition, subtraction, multiplication, and division.
//   The program will make use of different types of operators in C:
//  arithmetic operators, relational operators, and logical operators.

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    // Get user input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    // Perform calculation based on operator
    if ((operator == '/' && num2 == 0)) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                break;
            default:
                printf("Error: Invalid operator!\n");
        }
    }
    
    return 0;
}

// 6.create a Eligibility Checker program that uses logical operators
//  to determine whether a person is eligible to vote or drive based 
//  on their age and certain conditions. The program will check two 
//  conditions using logical operators like AND (&&), OR (||), and NOT (!),
//  and then print appropriate messages based on these conditions.

#include <stdio.h>

int main() {
    int age;
    char citizen;
    
    // Get user input
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Are you a citizen? (y/n): ");
    scanf(" %c", &citizen);
    
    // Check eligibility for voting (age >= 18 and must be a citizen)
    if (age >= 18 && (citizen == 'y' || citizen == 'Y')) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    
    // Check eligibility for driving (age >= 16)
    if (age >= 16) {
        printf("You are eligible to drive.\n");
    } else {
        printf("You are not eligible to drive.\n");
    }
    
    return 0;
}

// 7.create a Multiplication Table Generator using nested loops
//  in C programming. The program will generate the multiplication
//  table for numbers from 1 to a given limit and display the
//   results in a structured format.


#include <stdio.h>

int main() {
    int limit;
    
    // Get user input for the table limit
    printf("Enter the limit for the multiplication table: ");
    scanf("%d", &limit);
    
    printf("\nMultiplication Table from 1 to %d:\n", limit);
    printf("====================================\n");
    
    // Outer loop for rows (multiplication numbers)
    for (int i = 1; i <= limit; i++) {
        // Inner loop for columns (multipliers)
        for (int j = 1; j <= 10; j++) {
            printf("%2d x %2d = %3d   ", i, j, i * j);
        }
        printf("\n"); // New line after each table row
    }
    
    return 0;
}

// 8.Use ternary operator to solve the following problems:
// Checking if a number is even or odd.
// Determining the maximum of two numbers.
// Categorizing a number as positive, negative, or zero.
// Finding the grade based on marks.

#include <stdio.h>

int main() {
    int num1, num2, marks;
    
    // Checking if a number is even or odd
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("%d is %s\n", num1, (num1 % 2 == 0) ? "Even" : "Odd");
    
    // Determining the maximum of two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Maximum: %d\n", (num1 > num2) ? num1 : num2);
    
    // Categorizing a number as positive, negative, or zero
    printf("Enter a number to categorize: ");
    scanf("%d", &num1);
    printf("The number is %s\n", (num1 > 0) ? "Positive" : (num1 < 0) ? "Negative" : "Zero");
    
    // Finding the grade based on marks
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Your grade is %c\n", 
        (marks >= 90) ? 'A' : 
        (marks >= 80) ? 'B' : 
        (marks >= 70) ? 'C' : 
        (marks >= 60) ? 'D' : 'F');
    
    return 0;
}


// 9.Create a simple calculator program that can perform basic 
// arithmetic operations using the switch-case statement.
//  The program will prompt the user to select an operation 
//  from a menu and then input the numbers required for that operation.
//   Based on the user's selection, the corresponding calculation will
//    be performed and the result will be displayed.
// The program will support the following operations:
// Addition
// Subtraction
// Multiplication
// Division

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    // Display menu
    printf("Select an operation:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("Enter your choice: ");
    scanf(" %c", &operator);
    
    // Get user input for numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    // Perform operation using switch-case
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please choose +, -, *, or /.\n");
    }
    
    return 0;
}


// 10.Demonstrate the use of arrays in C programming
//  by creating a Student Grades Management System.
//   The program will allow the user to input student
//    names and their corresponding grades, calculate
//     average grades, and display the highest
//      and lowest grades in the class.
// The program will:
// Allow the user to input multiple students and their grades.
// Calculate the average grade of the class.
// Identify the highest and lowest grades.
// Display all students with their grades.






// exercises questions on 18 march 2025




// Q1: Write a program to check if a number is odd or even
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

// Q2: Write a program in C to check if the given year is a leap year or not

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


//Q3: Write a program in C to display the Fibonacci series of 15
#include <stdio.h>

int main() {
    int n = 15, t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d, %d", t1, t2);

    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}

// Q4: Write a program in C to use logical operators and calculate student grades
#include <stdio.h>

int main() {
    int subjects, total = 0;
    float average;
    
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    int marks[subjects];

    for (int i = 0; i < subjects; i++) {
        printf("Enter marks for subject %d (out of 20): ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = (float)total / subjects;

    printf("Average Score: %.2f\n", average);

    if (average > 15) {
        printf("Grade: A\n");
    } else if (average >= 10 && average <= 15) {
        printf("Grade: B\n");
    } else if (average >= 5 && average < 10) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}


//  5 a.
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j >= 6 - i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
//  b. 
#include <stdio.h>

int main() {
    for (int i = 2; i <= 5; i++) {
        for (int j = 5; j >= 6 - i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
//  c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
//  d

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= 6 - i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// e
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Q6: Differentiate continue and break in a for loop
#include <stdio.h>
int main() {
    printf("Using break:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Terminates the loop when i is 3
        }
        printf("%d ", i);
    }
    
    printf("\nUsing continue:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skips iteration when i is 3
        }
        printf("%d ", i);
    }
    
    return 0;
}

// Q7: Differentiate while and do-while loop
#include <stdio.h>

int main() {
    int i = 1;
    
    printf("Using while loop:\n");
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    
    printf("\nUsing do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}

// Q8: Convert °C to °F if C = 36
#include <stdio.h>

int main() {
    float celsius = 36;
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    return 0;
}

// Q9: Display even numbers between 2 and 50
#include <stdio.h>

int main() {
    printf("Even numbers between 2 and 50:\n");
    for (int i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }
    return 0;
}

// Q10: Differentiate if-else and switch-case
#include <stdio.h>

int main() {
    int num = 2;

    // Using if-else
    printf("Using if-else:\n");
    if (num == 1) {
        printf("One\n");
    } else if (num == 2) {
        printf("Two\n");
    } else {
        printf("Other number\n");
    }

    // Using switch-case
    printf("Using switch-case:\n");
    switch (num) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Other number\n");
    }

    return 0;
}


// other questions 

// Q1: Write a program in C using an array to display the values of x[2][2], x[2][1], and x[2][3].

#include <stdio.h>

int main() {
    int x[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };

    printf("x[2][2] = %d\n", x[2][2]); // 8
    printf("x[2][1] = %d\n", x[2][1]); // 7
    printf("x[2][3] = %d\n", x[2][3]); // Out of bounds (undefined behavior)

    return 0;
}


// Q2: Write a program in C to display formatted names using a 2D array of characters.

#include <stdio.h>

int main() {
    char *titles[] = {"Mr.", "Miss", "Mrs"};
    char *names[] = {"Musa", "Jolie", "Mary"};

    printf("%s %s\n", titles[0], names[0]); // Mr. Musa
    printf("%s %s\n", titles[1], names[1]); // Miss Jolie
    printf("%s %s\n", titles[2], names[2]); // Mrs. Mahoro Mary

    return 0;
}

// Q3: Write a program in C using strlen() then strcpy().
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[50]; // Large enough buffer

    printf("Length of str1: %lu\n", strlen(str1));

    strcpy(str2, str1); // Copy str1 to str2
    printf("Copied string: %s\n", str2);

    return 0;
}


// Q4: Write a program in C to compare two strings using strcmp().
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}


// assignment questions 
// Q1: Display memory addresses of an array and print all elements using an enhanced for loop

#include <stdio.h>

int main() {
    double arr[] = {9.24, 10.36, 16.05, 20.009};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Displaying memory addresses
    printf("Memory addresses of array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %lf, Address = %p\n", i, arr[i], (void*)&arr[i]);
    }

    // Displaying elements using an enhanced for loop (C does not support foreach directly)
    printf("\nArray elements using enhanced for loop:\n");
    for (double *ptr = arr; ptr < arr + size; ptr++) {
        printf("%lf ", *ptr);
    }
    
    return 0;
}


// Q2: Relationship between an array and a pointer

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer pointing to the first element of the array

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(ptr + %d) = %d, Address = %p\n", 
               i, arr[i], i, *(ptr + i), (void*)&arr[i]);
    }

    return 0;
}


// Q3: Calculate the size of a memory allocated variable

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    
    // Allocating memory for 5 integers dynamically
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Size of dynamically allocated memory: %lu bytes\n", 5 * sizeof(int));

    // Free the allocated memory
    free(ptr);

    return 0;
}



// ...............................................................................
// last question 

// q1. 1.	Create a simple Multiplication Table Generator using loops in C programming.
//  The program will allow the user to input a number, and it will generate and display
//   the multiplication table for that number, from 1 to 10. This project
//    will demonstrate the use of loops in C, specifically the for loop

#include <stdio.h>

int main(){
    int number, i;
    printf("please the number\n");
    scanf("%d", &number);
    
    for(int i = 0; i <=10; i++){
        printf("%d * %d = %d \n", number, i, number * i);
    }
     
    return 0;
}

// q2.
// 2.	create a Simple Invoice Generation System that uses the printf function to display formatted output. The program will accept user input for the details of an invoice (such as the item name, price, quantity, and calculate the total), and display a neatly formatted invoice.

#include <stdio.h>

int main() {
    char itemName[50];
    float price;
    int quantity;
    float total;

    // Get item details from the user
    printf("Enter item name: ");
    scanf("%s", itemName);  // for simple one-word names

    printf("Enter item price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    // Calculate total
    total = price * quantity;

    // Display formatted invoice
    printf("\n========== INVOICE ==========\n");
    printf("%-20s %10s %10s %10s\n", "Item", "Price", "Quantity", "Total");
    printf("-----------------------------------------------\n");
    printf("%-20s %10.2f %10d %10.2f\n", itemName, price, quantity, total);
    printf("===============================================\n");

    return 0;
}


