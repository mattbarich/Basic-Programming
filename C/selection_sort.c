#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size){
    for (int i=0; i<size-1; i++){
        int min_index = i;
        for (int j=i+1; j<size; j++){
            if(array[j] < array[min_index]){
                min_index = j;
            }
        }
        swap(&array[min_index], &array[i]);
    }
}

void printArray(int array[], int size){
    for (int i = 0; i < size; ++i)    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {

    int data[] = {-2, 45, 0, 11, -9, 12, -2, 24562, 123, 123, 162, 87, 45};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Unsorted Array\n");
    printArray(data, size);

    selectionSort(data, size);

    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);

}