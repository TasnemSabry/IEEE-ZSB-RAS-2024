#include <stdio.h>
#include <string.h>

int main(){

char name[100];
int max_length;
int freq[256] = {0}; //as ascii charachters
char most_repeated_char;
int max_freq = 0;

printf("Enter the maximum length for the name: ");
    scanf("%d", &max_length);

printf("Enter your name: ");
    scanf("%s", name);

for (int i = 0; i < strlen(name); i++) {
        freq[name[i]]++;
    }


for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_repeated_char = i;
        }
    }

    printf("Name: %s\n", name);
    printf("Most repeated character: %c & its Frequency: %d\n", most_repeated_char, max_freq);

    return 0;








}