/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình tìm phần tử chẵn lớn nhất trong mảng.
Nếu không tồn tại số chẵn thì hiển thị thông báo phù hợp.
*******************************************************************/
#include<stdio.h>

int FindEvenMax(int arr[], int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0 && arr[i] >= max){
            max = arr[i];
        }   
    }

    return max;
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
    int result = FindEvenMax(arr, n);
    printf ("The biggest even number in array: %d\n", result);

    return 0;
}