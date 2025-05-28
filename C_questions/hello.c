
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





// q4. 4.	create a Prime Number Generator program that uses a for loop to find
//  and display all prime numbers within a specified range. The program will prompt the user to
//  input a number, and then it will display all the prime numbers from 1 to that number.


#include <stdio.h>

int main() {
    int upper_limit, num, i, is_prime;

    // Ask the user for the upper limit
    printf("Enter a number: ");
    scanf("%d", &upper_limit);

    printf("Prime numbers from 1 to %d are:\n", upper_limit);

    // Loop from 2 to upper_limit
    for (num = 2; num <= upper_limit; num++) {
        is_prime = 1; // Assume num is prime

        // Check if num is divisible by any number from 2 to num-1
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Not prime
                break;
            }
        }

        // If is_prime is still 1, then num is prime
        if (is_prime == 1) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

// 5.	build a Simple Calculator program in C that performs basic arithmetic
//  operations like addition, subtraction, multiplication, and division.
//   The program will make use of different types of operators in C:
//    arithmetic operators, relational operators, and logical operators.

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation using arithmetic and relational operators
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '/') {
        // Use relational and logical operators to prevent division by zero
        if (num2 != 0 && !(num1 == 0 && num2 == 0)) {
            result = num1 / num2;
            printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator entered.\n");
    }

    // Bonus: Logical and relational example
    if ((num1 > num2) && (operator == '+')) {
        printf("Extra Info: First number is greater and addition was selected.\n");
    } else if ((num1 < num2) || (operator == '*')) {
        printf("Extra Info: Either second number is greater or multiplication was used.\n");
    }

    return 0;
}


// 6.	build a Simple Calculator program in C that performs basic arithmetic
//  operations like addition, subtraction, multiplication, and division.
//   The program will make use of different types of operators in C:
//    arithmetic operators, relational operators, and logical operators.

#include <stdio.h>

int main() {
    int age;
    char has_id;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Ask if the person has a valid ID (Y/N)
    printf("Do you have a valid ID? (Y/N): ");
    scanf(" %c", &has_id);  // Notice the space before %c to consume any newline

    // Convert to uppercase if user enters lowercase
    if (has_id >= 'a' && has_id <= 'z') {
        has_id -= 32;
    }

    // Check if person is eligible to vote (age >= 18 AND has ID)
    if (age >= 18 && has_id == 'Y') {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are NOT eligible to vote.\n");
    }

    // Check if person is eligible to drive (age >= 16 OR has driving permit)
    if (age >= 16 || has_id == 'Y') {
        printf("You may be eligible to drive, depending on local laws.\n");
    } else {
        printf("You are NOT eligible to drive.\n");
    }

    // Use of NOT operator to give an alert
    if (!(has_id == 'Y')) {
        printf("Reminder: You need a valid ID for voting or driving.\n");
    }
}

// 7.	create a Multiplication Table Generator using nested loops in C programming.
//  The program will generate the multiplication table for numbers from 1 
//  to a given limit and display the results in a structured format.



#include <stdio.h>

int main() {
    int limit;

    // Get the upper limit from the user
    printf("Enter the limit for the multiplication table: ");
    scanf("%d", &limit);

    printf("\nMultiplication Table from 1 to %d:\n\n", limit);

    // Print header row
    printf("    ");
    for (int i = 1; i <= limit; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Print separator line
    printf("    ");
    for (int i = 1; i <= limit; i++) {
        printf("----");
    }
    printf("\n");

    // Nested loops for multiplication table
    for (int i = 1; i <= limit; i++) {
        // Print row label
        printf("%2d |", i);

        for (int j = 1; j <= limit; j++) {
            printf("%4d", i * j);
        }

        printf("\n");
    }

    return 0;
}


// 8.	Use ternary operator to solve the following problems:
// •	Checking if a number is even or odd.
// •	Determining the maximum of two numbers.
// •	Categorizing a number as positive, negative, or zero.
// •	Finding the grade based on marks.

#include <stdio.h>

int main() {
    int num1, num2, number, marks;
    char grade;

    // 1. Check if a number is even or odd
    printf("Enter a number to check even or odd: ");
    scanf("%d", &number);
    printf("The number %d is %s.\n", number, (number % 2 == 0) ? "Even" : "Odd");

    // 2. Determine the maximum of two numbers
    printf("\nEnter two numbers to find the maximum:\n");
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    printf("Maximum is: %d\n", (num1 > num2) ? num1 : num2);

    // 3. Categorize a number as positive, negative, or zero
    printf("\nEnter a number to categorize as positive, negative, or zero: ");
    scanf("%d", &number);
    printf("The number is %s.\n",
        (number > 0) ? "Positive" :
        (number < 0) ? "Negative" :
        "Zero");

    // 4. Find grade based on marks
    printf("\nEnter marks (0-100): ");
    scanf("%d", &marks);

    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' :
            (marks >= 50) ? 'E' : 'F';

    printf("Grade: %c\n", grade);

    return 0;
}


// 9.	Create a simple calculator program that can perform basic
//  arithmetic operations using the switch-case statement. 
//  The program will prompt the user to select an operation from
//   a menu and then input the numbers required for that operation.
//    Based on the user's selection, the corresponding calculation
//     will be performed and the result will be displayed.

#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    // Display menu
    printf("Simple Calculator Menu:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Take input numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Switch-case for operation selection
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
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select 1 to 4.\n");
    }

    return 0;
}


// 10.	Demonstrate the use of arrays in C programming by creating a Student Grades Management System.
//  The program will allow the user to input student names and their corresponding grades,
//   calculate average grades, and display the highest and lowest grades in the class.

// The program will:
// •	Allow the user to input multiple students and their grades.
// •	Calculate the average grade of the class.
// •	Identify the highest and lowest grades.
// •	Display all students with their grades.


#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

int main() {
    char names[MAX_STUDENTS][NAME_LENGTH];
    float grades[MAX_STUDENTS];
    int n;
    float sum = 0, average;
    float highest, lowest;
    int highIndex = 0, lowIndex = 0;

    // Get number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input names and grades
    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]s", names[i]);  // Reads full name including spaces

        printf("Enter grade of %s: ", names[i]);
        scanf("%f", &grades[i]);

        sum += grades[i];

        // Track highest and lowest
        if (i == 0 || grades[i] > highest) {
            highest = grades[i];
            highIndex = i;
        }
        if (i == 0 || grades[i] < lowest) {
            lowest = grades[i];
            lowIndex = i;
        }
    }

    average = sum / n;

    // Display all students and grades
    printf("\n--- All Student Grades ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", names[i], grades[i]);
    }

    // Summary
    printf("\n--- Grade Summary ---\n");
    printf("Average Grade: %.2f\n", average);
    printf("Highest Grade: %.2f (%s)\n", highest, names[highIndex]);
    printf("Lowest Grade: %.2f (%s)\n", lowest, names[lowIndex]);

    return 0;
}


// 11.	Write a program to cover basic string operations such as:
// •	Storing multiple strings in an array.
// •	Performing string operations like concatenation, comparison, and length calculation.
// •	Display for a specific string in the array.
// •	Displaying the strings in the array.


#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int n;
    char temp[MAX_LENGTH];
    char search[MAX_LENGTH];
    int found = 0;

    // 1. Storing multiple strings in an array
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf(" %[^\n]s", strings[i]);  // Read full string with spaces
    }

    // 2. Displaying all strings
    printf("\n--- All Strings ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s (Length: %lu)\n", i + 1, strings[i], strlen(strings[i]));
    }

    // 3. String Concatenation
    printf("\nEnter two strings to concatenate:\n");
    printf("First string: ");
    scanf(" %[^\n]s", temp);  // temp holds the first string
    printf("Second string: ");
    scanf(" %[^\n]s", search);  // reuse variable for second string
    strcat(temp, search);  // Concatenate
    printf("Concatenated String: %s\n", temp);

    // 4. String Comparison
    printf("\nEnter two strings to compare:\n");
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    printf("First string: ");
    scanf(" %[^\n]s", str1);
    printf("Second string: ");
    scanf(" %[^\n]s", str2);
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // 5. Search for a specific string
    printf("\nEnter a string to search for: ");
    scanf(" %[^\n]s", search);
    for (int i = 0; i < n; i++) {
        if (strcmp(strings[i], search) == 0) {
            printf("'%s' found at position %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("'%s' not found in the list.\n", search);
    }

    return 0;
}


// 12.	Create a program that implements common string manipulation functions
//  that are commonly found in the C Standard Library, such as:
// •	String Length: A function to calculate the length of a string.
// •	String Copy: A function to copy one string to another.
// •	String Concatenation: A function to concatenate two strings.
// •	String Comparison: A function to compare two strings.
// •	String Reverse: A function to reverse a string.
// •	String Search: A function to find a character in a string.

#include <stdio.h>

// Function to calculate string length
int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

// Function to copy one string to another
void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to concatenate two strings
void stringConcat(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// Function to reverse a string
void stringReverse(char str[]) {
    int start = 0;
    int end = stringLength(str) - 1;
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to search for a character in a string
int stringSearch(char str[], char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
            return i; // return index
        i++;
    }
    return -1; // not found
}

// Main program to demonstrate usage
int main() {
    char str1[100], str2[100], result[200];
    char ch;

    printf("Enter first string: ");
    scanf(" %[^\n]s", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    printf("\nLength of first string: %d\n", stringLength(str1));

    stringCopy(result, str1);
    printf("After copying str1 to result: %s\n", result);

    stringConcat(result, str2);
    printf("After concatenation: %s\n", result);

    int cmp = stringCompare(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    stringReverse(str1);
    printf("Reversed first string: %s\n", str1);

    printf("Enter a character to search in second string: ");
    scanf(" %c", &ch);

    int index = stringSearch(str2, ch);
    if (index != -1)
        printf("Character '%c' found at position %d in second string.\n", ch, index);
    else
        printf("Character '%c' not found in second string.\n", ch);

    return 0;
}

// 13.	Create a simple calculator that can perform basic arithmetic operations
//  like addition, subtraction, multiplication, and division. 
//  We'll structure the code using functions for each operation and then call them from the main function.



#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    // Menu
    printf("=== Simple Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose an operation (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Operation selection
    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}


// 15.	Write a program to display the following patterns
// i. 
//      * * * * *
//      * * * *
//      * * * 
//      * *
//     *
// ii.
//          1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
// iii. 
//          *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// iv.
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//          *
// v. 
//            1
//          1   1
//        1   2   1
//      1   3   3    1
//    1  4    6   4   1
//  1  5   10   10  5   1


// i
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

// ii
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s <= 5 - i; s++)
            printf("  ");

        int num = i;
        for (int j = 1; j <= i; j++)
            printf("%d ", num++);
        
        num -= 2;
        for (int j = 1; j < i; j++)
            printf("%d ", num--);

        printf("\n");
    }
    return 0;
}


// iii

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}


// iv

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}


// v.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows = 6;
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < rows - i - 1; s++)
            printf("  ");
        for (int j = 0; j <= i; j++)
            printf("%2d ", combination(i, j));
        printf("\n");
    }
    return 0;
}


#include<stdio.h>
main(){
 int i, j;
 for(j=1;j<=6; j++){
    for(i=1;i>=5; i--){
        printf("%d", i);
    }
    printf("%d\n", j);
 }
}

