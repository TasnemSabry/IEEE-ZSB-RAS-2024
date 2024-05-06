#include <stdio.h>


typedef int Integer;       
typedef char Character;    
typedef short ShortInt;    
typedef long LongInt;  
typedef float FloatNum;    
typedef double DoubleNum;
typedef unsigned int UnInt;
typedef unsigned char UnChar;



int main() {

    printf("Size of Integer: %zu bytes\n", sizeof(Integer));

    printf("Size of Character: %zu bytes\n", sizeof(Character));

    printf("Size of ShortInt: %zu bytes\n", sizeof(ShortInt));

    printf("Size of LongInt: %zu bytes\n", sizeof(LongInt));

    printf("Size of FloatNum: %zu bytes\n", sizeof(FloatNum));

    printf("Size of DoubleNum: %zu bytes\n", sizeof(DoubleNum));

    printf("Size of UnInt: %zu bytes\n", sizeof(UnInt));

    printf("Size of UnChar: %zu bytes\n", sizeof(UnChar));

    return 0;
}