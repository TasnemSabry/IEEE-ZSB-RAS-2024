#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};



void addNode(struct Node **start, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *start;
    *start = newNode;

}


void deleteNode(struct Node **start) {
    if (*start == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *start;
    *start = (*start)->next;
    free(temp);

}


void printList(struct Node *start) {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *current = start;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    
    
struct Node *start = NULL;
char choice;
int new_v;

while (1) {
    printf("Enter '+': Add node, '-': Delete node, 'p': Print list, '>x': Stop: ");
    scanf(" %c", &choice);

    if (choice == '+') {
        printf("Enter data for the new node: ");
        scanf("%d", &new_v);
        addNode(&start, new_v);
        } 

        else if (choice == '-') {
            deleteNode(&start);
        }
         else if (choice == 'p') {
            printList(start);
        }
         else if (choice == '>') {
            scanf(" %c", &choice); 
            if (choice == 'x') {
                break;
            }
        } 
         else {

            printf("Invalid choice. Please try again.\n");

        }
    }

    return 0;
}
