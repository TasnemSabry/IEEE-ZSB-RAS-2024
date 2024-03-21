#include <stdio.h>

void swap(int *p, int *q, int *r) {
int temp = *p;
    *p = *q;
    *q = *r;
    *r = temp;
}

int main() {
int x = 7, y = 8, z = 9;
int *p, *q, *r;
 p=&x, q=&y, r=&z;   

printf("x equals: %d\n", x);
printf("y equals: %d\n", y);
printf("z equals: %d\n", z);
printf("x'address equals: %p\n", p);
printf("y'address equals: %p\n", q);
printf("z'address equals: %p\n", r);
printf("value of *p: %d\n", *p);
printf("value of *q: %d\n", *q);
printf("value of *r: %d\n", *r);

    printf("Swapping pointers.\n");
    swap(&p, &q, &r);

printf("x equals: %d\n", x);
printf("y equals: %d\n", y);
printf("z equals: %d\n", z);
printf("x'address equals x: %p\n", p);
printf("y'address equals y: %p\n", q);
printf("z'address equals z: %p\n", r);
printf("value of *p: %d\n", *p);
printf("value of *q: %d\n", *q);
printf("value of *r: %d\n", *r);

}