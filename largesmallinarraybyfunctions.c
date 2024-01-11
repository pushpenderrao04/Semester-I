#include <stdio.h>

int maxi(int arr[], int size) {
    int i, maximum = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    return maximum;
}

int mini(int arr[], int size) {
    int i, minimum = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return minimum;
}

int main() {
    int i, maximum, minimum, size;

    printf("Enter the size of the array:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }

    maximum = maxi(arr, size);
    minimum = mini(arr, size);

    printf("The largest number in the array is: %d\n", maximum);
    printf("The smallest number in the array is: %d\n", minimum);

    return 0;
}