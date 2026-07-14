/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình đổi chỗ phần tử lớn nhất và phần tử nhỏ
nhất trong mảng, sau đó hiển thị mảng mới.
*******************************************************************/
#include <stdio.h>
#include "Swap.h"

void SwapMaxMin(int arr[], int n){
    int maxidx = 0;
    int minidx = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > arr[maxidx])   maxidx = i;
        if (arr[i] < arr[minidx])   minidx = i;
    }

    Swap (&arr[maxidx], &arr[minidx]);
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

    /* Function call */
    SwapMaxMin (arr, n);
    printf ("New array: ");
    for (int k = 0; k < n; k++){
        printf ("%d ", arr[k]);
    }

    return 0;
}