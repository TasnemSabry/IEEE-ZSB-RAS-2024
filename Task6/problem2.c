#include <stdio.h>
#include <stdlib.h>

int main(){

int* ptr1;
int* ptr2;
int* ptr3;
int* ptr4;
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


free(ptr1);
printf("Memory for ptr1 freed\n");

printf("---------------------------------\n");


ptr4 = (int *) malloc(8 * sizeof(int));

if (ptr4==NULL){

printf("Out Of Memory\n");

 return 0;
}
else {
    printf("Memory Allocation\n");
}


for(x=0; x<8; x++){

ptr4 [x] = 100 + x;

}

for(x=0; x<8; x++){
    printf("value [%d]: %d\n", x+1, ptr4 [x]);

} 

printf("---------------------------------\n");

free(ptr2);
free(ptr4);


return 0;

}

