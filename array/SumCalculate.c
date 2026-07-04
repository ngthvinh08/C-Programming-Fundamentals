/*************************************************************************************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím. 
Bạn hãy viết chương trình hiển thị ra tổng của phần tử đầu tiên và cuối cùng trong mảng arr. 
*************************************************************************************************************************************/ 
#include<stdio.h>

int GetFirstLastSum(int *arr, int n){
    return arr[0] + arr[n-1];
}

int main() {
    int n;
    printf ("Input number of element in the array: ");
    scanf ("%d", &n);

    /* Condition */
    if (n <= 0) {
        printf ("There must be at least 1 element"); 
        return 1;
    }

    int arr[n];
    printf ("Input values in the array: ");
    for (int j = 0; j < n; j++){
        scanf ("%d", &arr[j]);
    }
    
    int a = GetFirstLastSum(arr, n);
    printf ("Sum of the first and last element in array is: %d\n", a);
    return 0;
}
