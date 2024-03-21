#include <stdio.h>

//problem1:
int main() {
char textt[100];
printf("Enter your text: ");
fgets(textt, 100, stdin); 
printf("You have entered:\n");
printf("%s", textt);

}


//problem2:
int main() {
char textt[100];
printf("Enter your text: ");
fgets(textt, 100, stdin); 

printf("The individual characters:\n");
    for (int i = 0; textt[i] != '\0'; i++) { 
        printf("%c\n", textt[i]);
}

}



//problem3:
#include <stdio.h>

int comparing2Strings(char string1[], char string2[]) {
  int i;
    for (i = 0; string1[i] != '\0' && string2[i] != '\0' && string1[i] == string2[i]; i++) {
        continue;
    }
    
    if (string1[i] == '\0' && string2[i] == '\0')
        return 1; //if strings are same
    else
        return 0; //if strings are different
}
int main(){

char string1[100], string2[100];

    printf("Enter first string: ");
fgets(string1, 100, stdin); 

    printf("Enter second string: ");
fgets(string2, 100, stdin); 

 if (comparing2Strings(string1, string2)) {
        printf("strings are same.\n");
    } else {
        printf("The strings are different.\n");
    }

}




//problem4:
void copyString(char str1[], char str2[]) {
    int i;
    for ( i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}

int main(){

char str1[100], str2[100];
    printf("Enter your string: ");
fgets(str1, 100, stdin); 

    copyString(str1, str2);

    printf("The string: %s\n", str2);

}


