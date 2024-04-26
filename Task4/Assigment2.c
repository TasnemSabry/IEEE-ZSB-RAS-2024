//Assigment2

//problem1

#include <stdio.h>
#include <string.h>

struct Date { 
    int day;
    int month;
    int year;
};

int main() {
    struct Date d1, d2; 
    char dateStr1[11], dateStr2[11];

    printf("Enter the dates in this way dd/mm/yyyy:\n");

    printf("Enter the first date: ");
    scanf("%s", dateStr1);
    sscanf(dateStr1, "%d/%d/%d", &d1.day, &d1.month, &d1.year);

    printf("Enter the second date: ");
    scanf("%s", dateStr2);
    sscanf(dateStr2, "%d/%d/%d", &d2.day, &d2.month, &d2.year);

    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}


//OR

#include <stdio.h>
#include <string.h>

struct Date
{
    char day[3];
    char month[3];
    char year[5];
};

int main()
{
    struct Date d1, d2;

    printf("Enter first date (dd/mm/yyyy): ");
    scanf("%2s/%2s/%4s", d1.day, d1.month, d1.year);

    printf("Enter second date (dd/mm/yyyy): ");
    scanf("%2s/%2s/%4s", d2.day, d2.month, d2.year);

    if(strcmp(d1.day, d2.day) == 0 && strcmp(d1.month, d2.month) == 0 && strcmp(d1.year, d2.year) == 0)
        printf("\nDates are equal");
    else
        printf("\nDates are not equal");

    return 0;
}


//problem2


#include <stdio.h>

struct info {
    char name[50];
    int age;
};

int main() {
struct info person;

    printf("Enter your name:");
    scanf("%s", person.name); 
    printf("Enter your age:");
    scanf("%d", &person.age);


  struct info *ptr;
  ptr = &person;


    printf("Name: %s\n", (*ptr).name);
    printf("Age: %d\n", (*ptr).age);

    return 0;
}




