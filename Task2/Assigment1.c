
//problem1:
#include <stdio.h>

int main() {

    // int *p1 = NULL;
    // char *p2 = NULL;
    // long long *p3 = NULL;

    int x = 8;
    char y = 'f';
    long long z = 111000222;

    int *p1 = &x;
    char *p2 = &y;
    long long *p3 = &z;

    printf("The value of p1 is: %p\n", p1);
    printf("The value of p2 is: %p\n", p2);
    printf("The value of p3 is: %p\n", p3);
    
    p1++;
    p2++;
    p3++;

    printf("The value of p1++ is: %p\n", p1); //4_bytes
    printf("The value of p2++ is: %p\n", p2); //1_byte
    printf("The value of p3++ is: %p\n", p3); //8_bytes

    return 0;
}


//problem2:
#include <stdio.h>

int main() {

    unsigned int value = 0xABCDEF;  // HEX value of 3 bytes
    unsigned int *ptr = &value;

    printf("Initial value: 0x%X\n", *ptr);

    printf("After *ptr++: 0x%X\n", *ptr++);
    printf("Reason: The current value at the memory location pointed by ptr is accessed and then the pointer is incremented to point to the next memory location. So, it first prints the initial value 0xABCDEF and then increments the pointer, but the value of the pointer is not printed again.\n");

    printf("After *++ptr: 0x%X\n", *++ptr);
    printf("Reason: The pointer is first incremented to point to the next memory location and then the value at that memory location is accessed. So, it increments the pointer and prints the value at the next memory location.\n");

    printf("After ++*ptr: 0x%X\n", ++*ptr);
    printf("Reason: The value at the current memory location pointed by ptr is incremented. So, it increments the value at the current memory location and prints the updated value.\n");

    return 0;
}