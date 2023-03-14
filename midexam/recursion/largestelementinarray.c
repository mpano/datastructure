#include <stdio.h>

#define MAX_SIZE 100

int findMax(int arr[], int size);

int main() {
    int arr[MAX_SIZE], size, max;
    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    max = findMax(arr, size);
    printf("The largest element of the array is %d\n", max);
    return 0;
}

int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int max = findMax(arr, size - 1);
        if (arr[size - 1] > max) {
            return arr[size - 1];
        } else {
            return max;
        }
    }
}