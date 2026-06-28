#include <stdio.h>

// Hàm swap đúng
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b); // truyền địa chỉ vào
    printf("after swapping, a = %d, b = %d\n", a, b);

    return 0;
}
