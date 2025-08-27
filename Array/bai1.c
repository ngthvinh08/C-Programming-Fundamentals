/*
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra phần tử lớn nhất trong mảng. 
Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:
*/ 

#include<stdio.h>

int main() {
    int n;
    scanf ("%d\n", &n);
    int arr[100];
    for (int i = 0; i < n; i++){
        scanf ("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf ("%d", max);
    return 0;
}


