/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình kiểm tra xem mảng có được sắp xếp theo
thứ tự tăng dần hay không. Nếu không thì sắp xếp lại theo thứ tự tăng
dần rồi in ra màn hình kết quả.
*******************************************************************/
#include <stdio.h>
#include <stdbool.h>

#define TEST_SWAP_FUNCTIONS 0

/* Non-pointer swap function */
/* The original value won't be affected */
void NonPointerSwap(int a, int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
}

/* Swap function */
void Swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

/* XOR swap */
void XORSwap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

/* Macro */
#define SWAP(x, y) do {          \
    typeof(x) temp = (x);        \
    (x) = (y);                   \
    (y) = temp;                  \
} while(0)


/* Function to re-arrange */
void ReArrange(int arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] > arr[i+1]){
            Swap (&arr[i], &arr[i+1]);
        }
    }
}

/* Function to check if array is sorted in ascending order */
bool CheckOrder(int arr[], int n) {
    if (n <= 1) {
        return true;  // Empty array or has 1 element
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("Wrong order\n");
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
    ReArrange(arr, n);
    printf("Values after rearrange: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", arr[i]);
    }
}

}