#include <stdio.h>

#define ASCENDING 0
#define DESCENDING 1

void Ascending_sort(int arr[], int n) {
int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
   }
  }
 }
}


void Descending_sort(int arr[], int n) {
int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
   }
  }
 }
}


void get_input(int arr[], int n) {
   

    // printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


int main(){

int n;

printf("Enter no. of integers: ");
scanf("%d", &n);

int arr[n];

get_input(arr, n);

#ifdef ASCENDING
Ascending_sort(arr, n);

#elif DESCENDING
Descending_sort(arr, n);

#endif

printf("Sorted array: \n");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}


return 0;

}


//OR



#include <stdio.h>

#define ASCENDING 0
#define DESCENDING 1

void ascending_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
      }
   }
 }
}

void descending_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
  }
}

void get_input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int main() {
int n;
int option;

printf("Enter number of integers: ");
scanf("%d", &n);

int arr[n];
get_input(arr, n);

printf("Choose option 0 for ascending sort or 1 for descending sort: ");
scanf("%d", &option);

#ifdef ASCENDING
    if (option == ASCENDING) {
        ascending_sort(arr, n);
        printf("Sorted array in ascending: ");
    }
#endif

#ifdef DESCENDING
    if (option == DESCENDING) {
        descending_sort(arr, n);
        printf("Sorted array in descending: ");
    }
#endif

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}