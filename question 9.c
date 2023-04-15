#include <stdio.h>

int main() {
    int arr[100], reversed[100];
    int size, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for (i = size - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = arr[i];
    }

    // Check if it is a palindrome
    int palindrome = 1;
    for (i = 0; i < size; i++) {
        if (arr[i] != reversed[i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
