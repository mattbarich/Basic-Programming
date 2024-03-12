#include <stdio.h>

void insertionSort(int array[], int size){
    for(int i=0; i < size; i++){
        int temp = array[i];
        int j = i - 1;

        while (temp < array[j] && j >= 0){
            array[j+1] = array[j];
            j--; 
        }
        array[j + 1] = temp;        
    }

}

void printArray(int array[], int size){
    for (int i = 0; i < size; ++i)    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main(){

    int data[] = {-2, 45, 0, 11, -9, 12, -2, 24562, 123, 123, 162, 87};
    int dataSize = sizeof(data) / sizeof(data[0]);
    printf("Unsorted Array:\n");
    printArray(data, dataSize);

    insertionSort(data, dataSize);

    printf("Sorted Array: \n");
    printArray(data, dataSize);


    return 0;
}