#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* pre;
};

void display(struct Node* ptr){
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* InsertionAtBegining(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node* InsertionAtIndex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* InsertionAtEnd(struct Node* head, int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node*p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main(){
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
    first->pre = NULL;
    second->data = 20;
    second->next = third;
    second->pre = first;
    third->data = 30;
    third->next = fourth;
    third->pre = second;
    fourth->data = 40;
    fourth->next = NULL;
    fourth->pre = third;
    
    printf("linked list:\n");
    display(first);
    
    first = InsertionAtBegining(first, 50);
    printf("\nLinked list after InsertionAtBegining:\n");
    display(first);
    
    first = InsertionAtIndex(first, 60, 2);
    printf("\nLinked list after InsertionAtIndex:\n");
    display(first);
    
    first = InsertionAtEnd(first, 80);
    printf("\nlinked list after InsertionAtEnd\n");
    display(first);
    
    return 0;
}
