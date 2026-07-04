/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra phần tử lớn nhất trong mảng. 
Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:
*******************************************************************/ 

#include<stdio.h>

int FindMax(int *arr, int n){
    int max = arr[0];

    /* Logic */
    for (int i = 1; i < n; i++){
        if (arr[i] >= max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int n;
    printf ("The size of array: ");
    scanf ("%d", &n);

    int arr[n];
    printf ("Values in array: ");
    for (int i = 0; i < n; i++){
        scanf ("%d", &arr[i]);
    }


    int max = FindMax(arr, n);
    printf ("The biggest value is: %d", max);

    return 0;
}


