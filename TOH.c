#include<stdio.h>

void move(int n, char a, char b, char c){
    if(n==1){
        printf("move disk 1 from %c to %c\n", a,b);
        return ;
    }
    move(n-1, a,c,b);
    printf("move disk %d from %c to %c\n", n,a,b);
    move(n-1, c,b,a);
}

int main(){
    int n;
    printf("enter the number of disks: ");
    scanf("%d", &n);
    printf("the sequene of moves involve in tower of hanoi are: \n");
    move(n,'A','C','B');
    return 0;
}