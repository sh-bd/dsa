#include <stdio.h>
int main()
{
    int i, j, first, last, middle, search, swap, n;
    printf("Enter the number of the elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter integers\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    printf("The sorted list in ascending order is \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\nEnter value to find \n");
    scanf("%d", &search);
    first = 0, last = n - 1, middle = (first + last) / 2;
    while (first <= last) {
        if (arr[middle] < search) {
            first = middle + 1;
        }
        else if (arr[middle] == search) {
            printf("%d found at location %d", search, middle + 1);
            return 0;
        }
        else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    printf("Not found");
    return 0;
}
