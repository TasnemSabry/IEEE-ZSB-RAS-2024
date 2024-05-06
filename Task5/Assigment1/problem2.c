#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;


Complex addComplexNumbers(Complex n1, Complex n2) {
    Complex sum;
    sum.real = n1.real + n2.real;
    sum.imaginary = n1.imaginary + n2.imaginary;
    return sum;

}

int main() {
    
Complex n1, n2, sum;

    printf("Enter real and imaginary of number1: "); //Input like: 3 5
    scanf("%f %f", &n1.real, &n1.imaginary);

    printf("Enter real and imaginary of number2: ");
    scanf("%f %f", &n2.real, &n2.imaginary);

    sum = addComplexNumbers(n1, n2);

    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imaginary);

    return 0;
}