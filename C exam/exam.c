// names: Byiringniro Urbain Bobola
// id: 27150

// C Examinations    27 May 2025

// question 1
// A.create a Prime Number Generator program that uses a for loop to
//  find and display all prime numbers within a specified range.
//   The program will prompt the user to input a number,
//  and then it will display all the prime numbers from 1 to that number.

#include <stdio.h>


int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers from 1 to %d:\n", n);
    
    for (int i = 1; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}


// B. write a program in c language to call add method which is having 3
//  parameters of double data types. display its sum

#include <stdio.h>

double add(double a, double b, double c);

int main() {
    double num1, num2, num3, sum;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    sum = add(num1, num2, num3);

    printf("The sum is: %.2lf\n", sum);

    return 0;
}

double add(double a, double b, double c) {
    return a + b + c;
}




// section B

// q2. a. write a program to allow the user to perform basic
//  arithmetic operations (addition, substration, multiplocation,
//    division, and modulus) where the results of the two operands
//     will be stored to a chosen variable.  


#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Basic Arithmetic Operations Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus (integer only)\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice == 5) {
        int int1, int2, mod_result;
        printf("Enter two integers: ");
        scanf("%d %d", &int1, &int2);

        if (int2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }

        mod_result = int1 % int2;
        printf("Modulus = %d\n", mod_result);
    } else {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Sum = %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Difference = %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Product = %.2lf\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                result = num1 / num2;
                printf("Quotient = %.2lf\n", result);
                break;
            default:
                printf("Invalid choice. Please select between 1 and 5.\n");
        }
    }

    return 0;
}

// b. write a program in C languages to display the number
//  of character of "Hello World!" using strlenand sizeof methods. 

#include <stdio.h>
#include <string.h>

int main() {
    char message[] = "Hello World!";

    int length_strlen = strlen(message);

    int length_sizeof = sizeof(message);

    printf("Message: %s\n", message);
    printf("Length using strlen(): %d characters\n", length_strlen);
    printf("Length using sizeof: %d bytes (including null terminator)\n", length_sizeof);

    return 0;
}



//        Q3) a.	Write a program to display the following patterns
// i. 
// * * * * * * * * * 
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("* ");
        printf("\n \n \n");
    }
    return 0;
}


// b. write a program of your choice in double arrays 

#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    double matrix[2][3] = {
        {1.5, 2.3, 3.7},
        {4.2, 5.1, 6.8}
    };

    double sum = 0.0;
    int i, j;
    
    printf("Matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%.2lf\t", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    double average = sum / (rows * cols);

    printf("\nSum of all elements: %.2lf\n", sum);
    printf("Average of all elements: %.2lf\n", average);

    return 0;
}


// Q4) a. write a program to generate the fibonacci series,
//  which is sequence of numbers where each number is the sum
//   of the two preceding ones. prompt the user to enter the number 
//   of terms they want in the Fibonacci series 


#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series (%d terms):\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}



// b. write a program in C language to display the below pattern

//  8 7 6 5 4 3 2 1
//  8 7 6 5 4 3 2
//  8 7 6 5 4 3 
//  8 7 6 5 4 
//  8 7 6 5 
//  8 7 6 
//  8 7 
//  8


 #include <stdio.h>

int main() {
    int i, j;

    for (i = 8; i >= 1; i--) {
        for (j = 8; j >= 9 - i; j--) {
            printf("%d ", j);
        }
        printf("\n \n");
    }

    return 0;
}


