
//Assigment(1):

#include <stdio.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Undivisable by zero\n");
        return 0;
    }
    return num1 / num2;
}

int main() {

float num1, num2, result;
int choice;
float (*OpPtr)(float, float); // Function pointer 

printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice: ");
scanf("%d", &choice);

printf("Enter the first number: ");
scanf("%f", &num1);

printf("Enter the second number: ");
scanf("%f", &num2);

    switch (choice) {
        case 1:
            OpPtr = add;
            printf("Result of Addition: %f\n", OpPtr(num1, num2));
            break;
        case 2:
            OpPtr = subtract;
            printf("Result of Subtraction: %f\n", OpPtr(num1, num2));
            break;
        case 3:
            OpPtr = multiply;
            printf("Result of Multiplication: %f\n", OpPtr(num1, num2));
            break;
        case 4:
            OpPtr = divide;
            printf("Result of Division: %f\n", OpPtr(num1, num2));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}



//Assigment(2):

#include <stdio.h>

#define ADD(num1, num2) ((num1) + (num2))
#define SUBTRACT(num1, num2) ((num1) - (num2))
#define MULTIPLY(num1, num2) ((num1) * (num2))
#define DIVIDE(num1, num2) ((num2) != 0 ? ((num1) / (num2)) : 0)

int main() {
    float num1, num2;
    int choice;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            printf("Result of Addition: %f\n", ADD(num1, num2));
            break;
        case 2:
            printf("Result of Subtraction: %f\n", SUBTRACT(num1, num2));
            break;
        case 3:
            printf("Result of Multiplication: %f\n", MULTIPLY(num1, num2));
            break;
        case 4:
            printf("Result of Division: %f\n", DIVIDE(num1, num2));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}




//If, else statements:
"""
Used to make decisions in the code based on runtime conditions, you can use the if statement to specify a block of code to be executed if a condition is true.
 
 if (condition) {
  // block of code to be executed if the condition is true
}
"""

//Conditional compilationdirectives

"""
#ifdef:
Used to include a section of code if a certain macro is defined by #define.

#endif:
Used to mark the end of #ifdef.

#define DEBUG_MODE //Define DEBUG for debugging mode
int main() {

#ifdef DEBUG
    printf("Debugging mode is enabled");
#endif

"""

