#include <stdio.h>
#include <stdlib.h>

int main() {
    int *max = (int *)malloc(sizeof(int)); // Cấp phát bộ nhớ cho con trỏ
    if (max == NULL) {
        printf("Không thể cấp phát bộ nhớ\n");
        return 1;
    }

    *max = 15; // Gán giá trị cho ô nhớ mà con trỏ đang trỏ tới
    printf("%d\n", *max); // In ra giá trị của ô nhớ mà con trỏ trỏ tới

    free(max); // Giải phóng bộ nhớ đã cấp phát
    return 0;
}
