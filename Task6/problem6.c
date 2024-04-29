#include <stdio.h>



//Using macros

#define SIZEOF(x) ((char *)(&x + 1) - (char *)&x)


int main(){

int i;
double j;

printf("Size of int: %ld\n", SIZEOF(i));
printf("Size of double: %ld\n", SIZEOF(j));

return 0;


}





//Using Inline

inline size_t SIZEOF(void *ptr) {

return (char *)ptr + sizeof(*(char *)ptr) - (char *)ptr;

}

int main() {
    int i;
    double j;

    printf("Size of int: %ld\n", SIZEOF(&i));
    printf("Size of double: %ld\n", SIZEOF(&j));

    return 0;
}


//Macros: Macros are preprocessor directives that perform simple text substitutions. They are not type-safe and can lead to unexpected behavior if not used carefully.



//Inline Functions: Using the inline keyword provide type safety and better debugging capabilities compared to macros. They are part of the compiled code and behave more like regular functions.



//Best Use Case:
//Macros: Used for single-line operations, processed by the preprocessor and can lead to code bloat and potential issues with scoping.
//Inline Functions: Used for more complex operations, offer type safety, scoping, and can take advantage of the compiler's optimizations. Inline functions are easier to debug and maintain compared to macros.