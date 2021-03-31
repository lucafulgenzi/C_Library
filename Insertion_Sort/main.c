#include <stdio.h>

#define LENGHT 10

void print_array(int*);


int main() {
    int array[LENGHT] = { 12, 32, 4, 65, 15, 21, 9, 3, 76, 2};

    printf("NOT SORTED ARRAY\n");
    print_array(array);

    for (int k = 1; k < LENGHT; ++k){
        for (int i = k; i > 0 ; --i) {
            if(array[i-1] > array[i]){
                int temp;
                temp = array[i-1];
                array[i-1] = array[i];
                array[i] = temp;
            }
        }
    }

    printf("\nSORTED ARRAY\n");
    print_array(array);

    return 0;
}


void print_array(int *arr){
    for (int i = 0; i < LENGHT; ++i){
        printf("%d ", arr[i]);
    }
}

