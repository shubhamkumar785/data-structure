#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char *arr;
};

void push(struct stack *sp, char value) {
    if (sp->top == sp->size - 1) {
        printf("Stack Overflow\n");
    } else {
        sp->top++;
        sp->arr[sp->top] = value;
    }
}

char pop(struct stack *sp) {
    if (sp->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        char value = sp->arr[sp->top];
        sp->top--;
        return value;
    }
}

int isEmpty(struct stack *sp) {
    return sp->top == -1;
}

char stackTop(struct stack *sp) {
    if (isEmpty(sp)) {
        return -1; 
    } else {
        return sp->arr[sp->top];
    }
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

int precedence(char ch) {
    if (ch == '+' || ch == '-') {
        return 1;
    } else if (ch == '*' || ch == '/') {
        return 2;
    } else {
        return 0;
    }
}

char *infixToPostfix(char *infix) {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0') {
        if (!isOperator(infix[i])) {
            postfix[j] = infix[i];
            j++;
            i++;
        } else {
            if (precedence(infix[i]) > precedence(stackTop(sp))) {
                push(sp, infix[i]);
                i++;
            } else {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp)) {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    free(sp->arr);
    free(sp);
    return postfix;
}

int main() {
    char infix[] = "a + b * (c^d-e)^(f+g*h)-i";
    char *postfix = infixToPostfix(infix);
    printf("Postfix expression: %s\n", postfix);
    free(postfix); 
    return 0;
}
