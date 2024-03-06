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

int peek(struct Node* top, int pos){
    struct Node* ptr = top;
    for(int i =0; (i<pos-1 && ptr != NULL); i++){
        ptr = ptr->next;
    }
    if(ptr!= NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main(){
    struct Node* top = NULL;
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);
    display(top);
    for ( int i = 1; i<=4; i++){
        printf("value at position %d is: %d\n",i, peek(top, i));
    }   
    return 0;
}