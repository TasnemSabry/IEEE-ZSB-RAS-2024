
//problem3:
#include <stdio.h>

void increment(int *num) {
    (*num)++;
}

int main() {
    int x = 2;
    void (*incrementPtr)(int*);

    incrementPtr = &increment;
    incrementPtr(&x);

    printf("The new incremented value is: %d", x);

    return 0;
}



//problem4:
#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    int *ptr = array;

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}