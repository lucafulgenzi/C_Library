#include <stdio.h>
#define LENGHT 10

void print_array(int*);

int main() {

    int array[LENGHT] = { 21, 4, 65, 12, 4, 54, 12, 45, 3, 12 };
    printf("NOT SORTED ARRAY\n");
    print_array(array);

    for (int i = LENGHT-1; i > 0 ; --i) {
        for (int j = 0; j < i; ++j) {
            if( array[j] > array[j+1]){
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("\nSORTED ARRAY\n");
    print_array(array);
    return 0;
}



void print_array(int *arr){
    for (int i = 0; i < LENGHT; ++i) {
        printf("%d ", arr[i]);
    }
}
