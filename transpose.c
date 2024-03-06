#include<stdio.h>
int main(){
    int a[3][3], i,j;
    printf("enter a element in a matrix is\n: ");
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter a original matrix is\n: ");
    for(int i =0; i<3; i++){
        printf("\n");
    for(int j = 0; j<3; j++){
        printf("%d\t", a[i][j]);
    }}
    
    printf("\nthe transpose of matrix is\n:  ");
    for(int i =0; i<3; i++){
        printf("\n");
    for(int j=0; j<3; j++){
        printf("%d\t", a[j][i]);
    }}
}