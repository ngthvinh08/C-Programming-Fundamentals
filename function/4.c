#include <stdio.h>

// ham swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ham sap xep
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { // Sắp xếp giảm dần
                swap(&arr[i], &arr[j]);
            }
        }
    }
    // In mảng sau khi sắp xếp
    int i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

// Main
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, n);
    return 0;
}