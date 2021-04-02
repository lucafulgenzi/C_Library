#include <stdio.h>

#define LENGHT 10

void insertionSort(int [], int);
void print_array(int*, int);

int main(){
    int array[LENGHT] = { 4, 3, 54, 12, 65, 6, 11, 83, 23, 56};

    insertionSort(array, LENGHT);
    print_array(array, LENGHT);

    return 0;
}

void print_array(int *array, int n){
    for (int i = 0; i < n; ++i)
        printf("%d ", array[i]);
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; ++i) {
        int keyElement = arr[i];
        int j;
        for (j = i; j > 0 && keyElement < arr[j-1]; --j) {
            arr[j]=arr[j-1];
        }
        arr[j]=keyElement;
    }
}