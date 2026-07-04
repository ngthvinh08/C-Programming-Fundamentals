/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra phần tử lớn nhất trong mảng. 
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

    if (n <= 0){
        printf ("There must be at least one element in array");

        /* Early return: */
        return 1;
    }

    int arr[n];
    printf ("Values in array: ");
    for (int j = 0; j < n; j++){
        scanf ("%d", &arr[j]);
    }


    int a = FindMax(arr, n);
    printf ("The biggest value is: %d", a);

    return 0;
}


