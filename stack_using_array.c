#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int IsEmpty(struct stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int IsFull(struct stack *ptr) {
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr, int val){
    if(IsFull(ptr)){
        printf("stack is overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;  
    }
}

int pop(struct stack * ptr){
    if(IsEmpty(ptr)){
        printf("stack is underflow\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        ptr->top--;
        return val;
    }
}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("%d\n", IsFull(sp));
    printf("%d\n", IsEmpty(sp));

    push(sp, 56);
    printf("after push %d\n", IsFull(sp));
    printf("after push %d\n", IsEmpty(sp));

    printf("pop %d\n",pop(sp));

    return 0;
} 