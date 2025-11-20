#include <stdio.h>

int main() {
    int size;

    // array ko size dene ke liye
    printf("Enter the size:\n");
    scanf("%d", &size);

    int arr[size];

    // array mein value daalne ke liye
    printf("Enter values for array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // target element input
    int target;
    printf("Enter target value:\n");
    scanf("%d", &target);

    int found = 0;   // flag for checking found or not

    // linear search
    for (int i = 0; i < size; i++) {
        if (target == arr[i]) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;   // stop loop after finding
        }
    }

    // if target not found
    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
