#include <stdio.h>
#include <string.h>

int main() {
    
char input[100];
char unique[100];
int stop = 0;
int unique_index = 0;
int u_char[256] = {0};
char Stop_code[] = "!!";

while (!stop) {
    printf("Enter a string: ");
    scanf("%s", input);

    if (strcmp(input, Stop_code) == 0) {
        stop = 1;
    } else {
            

    for (int i = 0; i < strlen(input); i++) {
        if (u_char[input[i]] == 0) {
            unique[unique_index++] = input[i];
            u_char[input[i]] = 1;
        }
    }

        unique[unique_index] = '\0';

        printf("Unique characters: %s\n", unique);


        
        }
    }

    return 0;
}