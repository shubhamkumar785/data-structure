#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
        return -1;
    }

}
int main(){
    int arr[] = {1,2,6,78,79,98};
    int size = 6;
    int element = 2;
    int SearchIndex = linearSearch(arr, size, element);
    printf("%d %d\n", element, SearchIndex);
    return 0;

}