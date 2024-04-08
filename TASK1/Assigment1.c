
#include <stdio.h>



//problem1:
int main() {

int i, j, n;
int x = 0; 
printf("Enter the number of elements in the array: ");
scanf("%d", &n);

int arr[n];

printf("Enter the elements: ");
for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

for(i = 0; i < n; i++) {
    for(j = i + 1; j < n; j++){
        if(arr[i] == arr[j]) {
            x++; 
        }
    }
}

 printf("\nThe elements of the array are: ");
    for(i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

printf("\nThe number of duplicate elements in the array: %d", x); 

}


//problem2:
int main() {

int i, j, n;

printf("Enter the number of elements in the array: ");
 scanf("%d", &n);

int arr[n];

printf("Enter the elements: ");
for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }

printf("\nThe elements of the array are: ");
for(i = 0; i < n; i++) {
    printf("%d\t", arr[i]);
    }

printf("\nUnique elements in the array are: ");
for (i = 0; i < n; i++) {
    int uni_element = 1;
    for (j = 0; j < n; j++) {
         if (i != j && arr[i] == arr[j]) {
            uni_element = 0; 
            break;
            }
        }
        if (uni_element) {
            printf("%d ", arr[i]); 
    }

}

}


//problem3:

void count_freq(int arr[], int n) {
    
int freq[100] = {0}; 

printf("Enter elements of array: ");
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    freq[i] = -1;
}

for (int i = 0; i < n; i++) {
    int count = 1;
    for (int j = i + 1; j < n; j++) {
        if (arr[i] == arr[j]) {
            count++;
            freq[j] = 0;
        }
    }
    if (freq[i] != 0) {
        freq[i] = count;
    }
}

printf("\nFrequency of all elements of array : \n");
for (int i = 0; i < n; i++) {
    if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}

int main() {
    
int n;

printf("Enter the number of elements in the array: ");
scanf("%d", &n);

int arr[n];

count_freq(arr, n);

}


//problem4:

void Adding_nums(int *num1, int *num2, int *sum){
    *sum = *num1 + *num2;

}

int main() {
int num1, num2, sum;

printf("Enter num1: ");
scanf("%d", &num1);

printf("Enter num2: ");
scanf("%d", &num2);

Adding_nums(&num1, &num2, &sum);

printf("Sum of numbers equals: %d", sum);

}



//OR:




void Adding_nums(int nums[], int n, int *sum) {
    *sum = 0;
    for (int i = 0; i <n; i++) {
        *sum += nums[i];
    }
}

int main() {

int n;
    
printf("Enter the count of numbers to add: ");
scanf("%d", &n);
    
int nums[n];
    
  
    
for (int i = 0; i <n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &nums[i]);
}

int sum;
    
Adding_nums(nums, n, &sum);

printf("Sum of numbers equals: %d", sum);

 
}