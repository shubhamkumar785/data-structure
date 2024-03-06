#include <stdio.h>
#include <stdlib.h>

struct ques {
    int size;
    int front; 
    int rear;  
    int *arr;
};

int IsEmpty(struct ques *ptr) {
    if (ptr->front == -1 || ptr->front > ptr->rear) {
        return 1; 
    } else {
        return 0; 
    }
}

int IsFull(struct ques *ptr) {
    if (ptr->rear == ptr->size - 1) {
        return 1;
    } else {
        return 0; 
    }
}
