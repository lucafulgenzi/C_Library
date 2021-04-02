#include <stdio.h>

#define LENGHT 10

void print_array(int*, int);
void mergeSort(int [], int, int);
void merge(int [], int , int);

int main(){
    int array[LENGHT] = { 4, 3, 54, 12, 65, 6, 11, 83, 23, 56};

    mergeSort(array, 0, LENGHT-1);
    print_array(array, LENGHT);

    return 0;
}

void mergeSort(int arr[], int start, int end){
    if ( end == start)
        return;

    int middle = (start + end) / 2;

    mergeSort(arr, start, middle);
    mergeSort(arr, middle+1, end);
    merge(arr, start, end);
}

void merge(int arr[], int start, int end){
    int middle = (start + end) / 2;
    int i = start, j = middle + 1, tempI = 0;
    int tempArr[ end - start + 1];

    while (i <= middle && j <= end){
        if (arr[i] < arr[j])
            tempArr[tempI++] = arr[i++];
        else
            tempArr[tempI++] = arr[j++];
    }

    while (i <= middle)
        tempArr[tempI++] = arr[i++];

    while (j <= end)
        tempArr[tempI++] = arr[j++];

    for( int k = 0; k < tempI; ++k)
        arr[start + k] = tempArr[k];

}

void print_array(int *array, int n){
    for (int i = 0; i < n; ++i)
        printf("%d ", array[i]);
}
