/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình kiểm tra xem mảng có được sắp xếp theo
thứ tự tăng dần hay không. Nếu không thì sắp xếp lại theo thứ tự tăng
dần rồi in ra màn hình kết quả.
*******************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include "Swap.h"

#define TEST_SWAP_FUNCTIONS 0

/* Macro */
#define SWAP(x, y) do {          \
    typeof(x) temp = (x);        \
    (x) = (y);                   \
    (y) = temp;                  \
} while(0)

/* Function to re-arrange */
/* Bubble Sort
 * i: Number of completed passes.
 * j: Compare adjacent elements.
 * After each pass, the largest element is placed at the end.
 * Therefore, the last i elements are already sorted and
 * do not need to be compared again. -> j < n - i -1
 */
void ReArrange(int arr[], int n){
    for (int i = 0; i < n - 1; i++) // Outer loop: Number of iterations
        for (int j = 0; j < n - i - 1; j++) // Inner loop: Compare 2 adjacent elements in each turn 
            if (arr[j] > arr[j+1])
                Swap(&arr[j], &arr[j+1]);
}

/* Function to check if array is sorted in ascending order */
bool CheckOrder(int arr[], int n) {
    if (n <= 1) {
        return true;  // Empty array or has 1 element
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    
    return true;   // Array is in correct order
}


int main(){

    #if TEST_SWAP_FUNCTIONS
        double e = 3.14, f = 2.71;
        char *p = "Hello", *q = "World";
        NonPointerSwap(c,d);
        XORSwap(&c, &d);
        Swap(&c, &d);
        SWAP (c, d);
        SWAP (e, f);
        SWAP (p, q);
    #endif

    int n;
    printf ("Input size of the array: ");
    scanf ("%d", &n);
    if (n <= 0){
        printf ("There must be at least 1 element in the array\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &arr[i]);
    }
    
/* Check order */
bool status = CheckOrder(arr, n);

if (status){
    printf("Correct order\n");
}

/* Re-arrange if in wrong order */
if (!status){
    printf("Wrong order\n");
    ReArrange(arr, n);
    printf("Values after rearrange: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", arr[i]);
    }
}
return 0;
}