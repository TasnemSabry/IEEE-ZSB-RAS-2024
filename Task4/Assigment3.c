
//Assigment3

#include <stdio.h>

struct test {
    int id;
    char name[50];
    char class_id;
};

int main() {
  
    printf("Size of struct test: %lu bytes\n", sizeof(struct test)); //output will be 56 bytes

    return 0;
}

//change the order of definition of the string to be the first


#include <stdio.h>

struct test {
    char name[50];
    int id;
    char class_id;
};

int main() {

    printf("Size of struct test: %lu bytes\n", sizeof(struct test)); //output will be 60 bytes

    return 0;
}


//There is a difference between two cases in size, becuase the compiler need to adjust the padding and alignment differently based on the order of member definitions, leading to potential differences in the overall size of the struct.
