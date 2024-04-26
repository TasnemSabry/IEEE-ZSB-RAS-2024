//Assigment1


#include <stdio.h>

//problem1

struct student_info {
    int roll_num;
    char name[50];
    int age;
    char address[50];
    float marks;
};

int main() {
   
struct student_info students[15];
    
    for (int i = 0; i < 15; ++i) {
        
        printf("Enter information for student %d:\n", i + 1);

        printf("Roll_Number: ");
        scanf("%d", &students[i].roll_num);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Address: ");
        scanf("%s", students[i].address);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("Information of students:\n");
    for (int i = 0; i < 15; ++i) {
        
        printf("Student %d:\n", i + 1);

        printf("Roll Number: %d\n", students[i].roll_num);

        printf("Name: %s\n", students[i].name);

        printf("Age: %d\n", students[i].age);

        printf("Address: %s\n", students[i].address);

        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}




//problem2


struct student_info {
    int roll_num;
    char name[50];
    int age;
    char address[50];
    float marks;
};


int print_count_students (struct student_info students[]) {

 printf("Information of students:\n");

 int x = 0;

    for (int i = 0; i < 15; ++i) {
        
        printf("Student %d:\n", i + 1);

        printf("Roll Number: %d\n", students[i].roll_num);

        printf("Name: %s\n", students[i].name);

        printf("Age: %d\n", students[i].age);

        printf("Address: %s\n", students[i].address);

        printf("Marks: %.2f\n", students[i].marks);
    
        if (students[i].marks < 12.0) {
            x++;
           }
    }       
    
return x;

}

int main() {
   
struct student_info students[15];
    
    for (int i = 0; i < 15; ++i) {
        
        printf("Information for student %d:\n", i + 1);

        printf("Roll_Number: ");
        scanf("%d", &students[i].roll_num);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Address: ");
        scanf("%s", students[i].address);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

 int count = print_count_students(students);

    printf("Number of students with marks less than 12: %d", count);

    return 0;

}    
