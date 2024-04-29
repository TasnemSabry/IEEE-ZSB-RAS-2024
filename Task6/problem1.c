#include <stdio.h>
#include <stdlib.h>

int main(){

int* ptr1;
int* ptr2;
int* ptr3;
int x;


ptr1 = (int *) malloc(5 * sizeof(int));

if (ptr1==NULL){

 printf("Out Of Memory\n");

 return 0;

}
else {
    printf("Memory Allocation\n");
    }

for(x=0; x<5; x++){

*(ptr1 + x) = 10 * (x+1);

}

printf("Values allocated using malloc:\n");

for(x=0; x<5; x++){
    printf("value [%d]: %d\n", x, *(ptr1 +x));

} 

printf("---------------------------------\n");

ptr2 = (int *) calloc(3, sizeof(int));

if (ptr2==NULL){

 printf("Out Of Memory\n");

 return 0;

}
else {
    printf("Memory Allocation\n");
    }


for(x=0; x<3; x++){

ptr2 [x] = x + 1 ;


}

printf("Values allocated using calloc:\n");

for(x=0; x<3; x++){
    printf("value [%d]: %d\n", x+1, ptr2 [x]);

} 

printf("---------------------------------\n");


ptr3 = (int*)realloc(ptr2, 5*sizeof(int));


if (ptr3==NULL){

 printf("Out Of Memory\n");

 return 0;

}
else {
    printf("Memory Allocation\n");
    }


for(x=3; x<5; x++){
ptr2 [x] = x + 1 ;

}


for(x=0; x<5; x++){
    printf("value [%d]: %d\n", x+1, ptr3 [x]);

} 

printf("---------------------------------\n");


free(ptr1);
free(ptr2);
free(ptr3);



return 0;

}

