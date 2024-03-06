#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data; 
    struct Node*next;
    struct Node*pre;
};

void display(struct Node*ptr){
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* DeletionAtBegining(struct Node*first){
    struct Node*ptr = first;
    first = first->next;
    free(ptr);
    return first;
}

struct Node* DeletionAtIndex(struct Node*first, int index){
    struct Node*p = first;
    struct Node*q = first->next;
    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return first;
}    
struct Node* DeletionAtEnd(struct Node*first){
    struct Node*p = first;
    struct Node*q = first->next;
    while(q ->next!= NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return first;
}    
int main(){
    struct Node*first;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    
    first->data = 10;
    first->next = second;
    first->pre = NULL;
    second->data = 20;
    second->next = third;
    second->pre =first;
    third->data = 30;
    third->next = fourth;
    third->pre = second;
    fourth->data = 40;
    fourth->next = NULL;
    fourth->pre = third;
    
    first = DeletionAtBegining(first);
    printf("linked list after deletion\n");
   
    first = DeletionAtIndex(first,2);
    printf("linked list after the deletion\n");
    
    first = DeletionAtEnd(first);
    printf("linked list after the deletion\n");
   
    display(first);
    return 0;
}