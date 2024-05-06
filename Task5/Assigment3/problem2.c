#include <stdio.h>

#define ADDITION 0
#define SUBTRACTION 1

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int option;
    int result;
    int x, y;

    printf("Choose option 0 for addition or 1 for subtraction: ");
    scanf("%d", &option);

    printf("Enter first integer: ");
    scanf("%d", &x);

    printf("Enter second integer: ");
    scanf("%d", &y);

#ifdef ADDITION
    if (option == ADDITION) {
        result = add(x, y);
        printf("Addition: %d ", result);
    }
#endif

#ifdef SUBTRACTION
    if (option == SUBTRACTION) {
        result = subtract(x, y);
        printf("Subtraction: %d ", result);
    }
#endif

    return 0;
}