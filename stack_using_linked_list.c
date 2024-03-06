#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* ptr){
    while( ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int IsEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int IsFull(struct Node* top){
    struct Node*p = (struct Node*)malloc(sizeof(struct Node));
    if( p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node* push(struct Node* top, int x){
    if(IsFull(top)){
        printf("stack is overflow\n");
    }
    else{
        struct Node*n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node** top){
    if(IsEmpty(*top)){
        printf("stack is underflow");
    }
    else{
        struct Node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main(){
    struct Node* top = NULL;
    top = push(top, 78);
    top = push(top, 82);
    top = push(top, 56);
    int element = pop(&top);
    printf("pooped element is %d\n", element);
    display(top);
    return 0;
}