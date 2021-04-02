#include <stdio.h>

#define LENGHT 10

void print_array(int*, int);
void bubbleSort(int [], int);
void swap(int [], int, int);

int main(){
    int array[LENGHT] = { 4, 3, 54, 12, 65, 6, 11, 83, 23, 56};

    bubbleSort(array, LENGHT);
    print_array(array, LENGHT);

    return 0;
}




void print_array(int *array, int n){
    for (int i = 0; i < n; ++i)
        printf("%d ", array[i]);
}

void bubbleSort(int arr[], int size)
{
    for (int i = size-1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if( arr[j] > arr[j+1]){
                swap(arr, j, j+1);
            }
        }
    }
}

void swap(int arr[], int j, int k){
    int temp;
    temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}