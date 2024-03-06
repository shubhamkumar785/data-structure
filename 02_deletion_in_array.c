
#include<stdio.h>

void display(int arr[], int n){
    for(int i =0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

int SortedDeletion(int arr[], int size, int capacity, int index){
    if(index>size){
        return -1;
    }
    for(int i = index; i <size; i++){
        arr[i] = arr[i+1];
    }
    return 1;


}
int main()
{
    int arr[100] = {2,4,6,89,90,92};
    int size = 6;
    int index = 1;
    display(arr, size);
    printf("\n");
    SortedDeletion(arr, size, 100, index);
    display(arr, size);
    size -= 1;
    return 0;
}
