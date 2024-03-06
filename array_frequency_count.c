#include<stdio.h>

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
int main(){
    int arr[100] = {2,4,6,2,8,2,10,2,3,5};
    int size = 10;
    int key;
    int freq = 0;
    display(arr, size);

    printf("enter number to find frequency\t");
    scanf("%d",&key);
    for(int i=0; i<10; i++){
        if(arr[i] == key){
            freq++;
        }
    }
    printf("frequency of %d is %d\n", key, freq);
    return 0;
} 

