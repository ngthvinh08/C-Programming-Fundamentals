/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Tiếp theo nhập thêm một số nguyên x.

Bạn hãy viết chương trình:
1. Hiển thị vị trí của phần tử lớn nhất trong mảng.
2. Tìm vị trí xuất hiện đầu tiên của x trong mảng.
   Nếu không tìm thấy thì hiển thị -1.
*******************************************************************/
#include<stdio.h>

/* Print biggest element index */
int PrintBiggest(int arr[], int n){
    int max = 0;
    int biggestidx;
    int i;
    for (i = 0; i < n; i++){
        if (arr[i] >= max){
            max = arr[i];
            biggestidx = i;
        }
    }
    printf ("Biggest element index: %d\n", biggestidx);
    printf ("Biggest value is: %d\n", max);
}

/* Find x first occurrence index */
int FindFirstIndex(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }

    return -1;
}

int main(){

    /* Input size */
    int n;
    printf ("Input size of the array: ");
    scanf ("%d", &n);

    /* Check n */
    if (n <= 0){
        printf ("There must be at least 1 element in the array");
        return 1;
    }

    /* Input values of the array */
    int arr[n];
    printf ("Input values of the array: ");
    for (int j = 0; j < n; j++){
        scanf ("%d", &arr[j]);
    }

    int x;
    printf ("Number to find first index: ");
    scanf ("%d", &x);

    /* Function call */
    PrintBiggest(arr, n);
    int result = FindFirstIndex(arr, n, x);
    printf ("The first index of %d is: %d", x, result);

    return 0;
}