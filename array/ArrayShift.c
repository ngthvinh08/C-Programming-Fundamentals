/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình dịch trái mảng một vị trí và hiển thị
mảng sau khi dịch.
*******************************************************************/
#include <stdio.h>

void LeftShiftArray(int arr[], int n){
    int temp = arr[0];
    for (int i = 0; i < n; i++){
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;
}


int main(){
    int n;
    printf ("Input size of the array: ");
    scanf ("%d", &n);
    if (n <= 0){
        printf ("There must be at least 1 element");
    }

    int arr[n];
    printf ("Input values of the array: ");
    for (int i = 0; i < n; i++)
    scanf ("%d", &arr[i]);

    /*Function call*/
    LeftShiftArray(arr, n);
    printf("Array after left shift: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
