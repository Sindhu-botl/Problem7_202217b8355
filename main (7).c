#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int array[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < size - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);
    
    // Printing original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    // Sorting array using bubble sort
    bubbleSort(array, size);
    
    // Printing sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}