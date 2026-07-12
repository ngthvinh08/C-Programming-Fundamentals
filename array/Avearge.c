/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra giá trị trung bình cộng của
các phần tử trong mảng.
*******************************************************************/
#include<stdio.h>

float CalAverage(int arr[], int n){
    float avg = 0;
    for (int i = 0; i < n; i++){
        avg += (float)arr[i]/n;
    }

    return avg;
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
    float avg = CalAverage(arr, n);
    printf ("The average of values in array: %f\n", avg);

    return 0;
}