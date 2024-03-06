#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data; 
    struct Node* next;
};

void display(struct Node* start) {
    struct Node* ptr = start;
    do {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } while(ptr != start);
}

int main() {
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    
    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = first; // Pointing back to the first node to make it circular
    
    display(first);
    
    // Remember to free the allocated memory
    free(first);
    free(second);
    free(third);
    free(fourth);
    
    return 0;
}  
 
