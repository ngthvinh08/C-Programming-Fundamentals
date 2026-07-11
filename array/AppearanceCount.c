/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Tiếp theo nhập thêm một số nguyên x.
Bạn hãy viết chương trình đếm số lần xuất hiện của x trong mảng
và hiển thị kết quả ra màn hình.
*******************************************************************/
#include<stdio.h>

int CountAppearances(int n, int arr[], int x){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            count++;
        }
    }

    return count;
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

    /* Input x */
    int x;
    printf ("Number to count: ");
    scanf ("%d", &x);

    /* Function call */
    int count = CountAppearances(n, arr, x);
    printf ("Number of appearances: %d\n", count);

    return 0;
}