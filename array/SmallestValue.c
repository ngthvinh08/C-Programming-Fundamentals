/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra phần tử nhỏ nhất trong mảng.
*******************************************************************/
#include<stdio.h>

int FindMin(int arr[], int n){
    int minidx = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] < arr[minidx]){
            minidx = i;
        }   
    }

    return arr[minidx];
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
    int result = FindMin(arr, n);
    printf ("The smallest number in array: %d\n", result);

    return 0;
}