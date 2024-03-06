

#include<stdio.h>

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

int SortedInsertion(int arr[], int size, int capacity,int element, int index){
    if(size>capacity){
        return -1;
    }
    for(int i = size; i>= index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {2,4,6,89,90,95};
    int size = 6;
    int element = 45;
    int index = 2;
    display(arr, size);
    printf("\n");
    SortedInsertion(arr, size, 100, element, index);
    size += 1;
    display(arr, size);

    return 0;
}