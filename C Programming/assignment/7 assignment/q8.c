#include <stdio.h>

int main() {
    int array[100], n, i, search, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(array[i] == search) {
            printf("Number %d found at position %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Number %d not found in the array.\n", search);
    }

    return 0;
}

