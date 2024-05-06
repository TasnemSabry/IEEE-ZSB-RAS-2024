#include <stdio.h>


struct student_info {

unsigned int roll_number : 4;
unsigned int age : 8;
unsigned int marks : 3;
char address[50];
char name[50];

};


void print_info(struct student_info students[], int num){

for(int i=0; i<num; i++){

printf("Student no. %u\n", i+1);
printf("Roll_number: %u\n", students[i].roll_number);
printf("Age: %u\n", students[i].age);
printf("Marks: %u\n", students[i].marks);
printf("Name: %s\n", students[i].name);
printf("Address: %s\n", students[i].address);



}

}




int main(){

struct student_info students[15];

print_info(students, 15);

    printf("Size of struct student_info: %lu bytes\n", sizeof(struct student_info));

    return 0;




}


//roll_number, age, and marks (bit-fields):
// The processor allocates the necessary memory to accommodate the specified number of bits for each member.
// The values of roll_number, age, and marks are stored in memory using the allocated number of bits.
// When reading or writing these bit-field members, the processor performs the necessary bit-level operations to access or modify the specific bits corresponding to each member.

//address and name (character arrays):
// The processor allocates contiguous memory blocks to store the characters of the strings.
// The characters of the strings are stored sequentially in memory, with each character taking up one byte of memory.
// The null terminator ('\0') is used to mark the end of each string.



