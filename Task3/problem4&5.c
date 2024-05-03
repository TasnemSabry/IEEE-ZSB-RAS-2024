#include <stdio.h>

enum operation {
    Add = '+',
    Sub = '-',
    Mult = '*',
    Div = '/',
    Rem = '%',
    And = '&',
    Or = '|',
    Not = '!'
};

float calculate(float operand1, float operand2, enum operation operation) {
    float result;

    switch (operation) {
        case Add:
            result = operand1 + operand2;
            printf("Result of Addition: %.2f ", result);
            break;

        case Sub:
            result = operand1 - operand2;
            printf("Result of Subtraction: %.2f ", result);

            break;

        case Mult:
            result = operand1 * operand2;
            printf("Result of Multiplication: %.2f ", result);

            break;

        case Div:
            if (operand2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                result = operand1 / operand2;
                printf("Result of Division: %.2f ", result);

            }
            break;

        case Rem:
            if (operand2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
            result = (int) operand1 % (int) operand2;  //compiler expects integer value
            printf("Reminder is: %.2f ", result);

            }
            break;

        case And:
            result = (int)operand1 & (int)operand2;  // operation is done as a binary then convert to decimal
            printf("Result of AND_OP: %.2f ", result);

            break;

        case Or:
            result = (int)operand1 | (int)operand2;
            printf("Result of Or_OP: %.2f ", result);

            break;
        
        case Not:
            result = !(int)operand1;
            printf("Result of Not_OP: %.2f ", result);

            break;

        default:
            printf("Invalid operation.\n");
            break;
    }

    return result;
}

int main() {
    float operand1, operand2;
    char operation;

    printf("Enter the first operand: ");
    scanf("%f", &operand1);
    printf("Enter the second operand: ");
    scanf("%f", &operand2);
    printf("Enter the operation: ");
    scanf(" %c", &operation);

    enum operation oper = (enum operation)operation;

    float result = calculate(operand1, operand2, oper);

    printf("The size of enum operation: %zu bytes\n", sizeof(enum operation)); //to get the size of enum operation



    return 0;
}



//Adding or removing members from the enum will not affect its size, becuase the size of the enum represents the memory required to store the enum type itself, not the memory required to store variables of that enum type.
