#include <stdio.h>

int main() {
    int array[] = {12, 45, 32, 89, 54, 67, 98, 75, 123, 56};
    int n = sizeof(array) / sizeof(array[0]);

    int max = array[0]; 
    int index = 0; 

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }

    printf("The highest element in the array is %d, and it is at index %d.\n", max, index);

    return 0;
}
