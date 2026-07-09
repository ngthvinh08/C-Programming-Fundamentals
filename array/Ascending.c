/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình kiểm tra xem mảng có được sắp xếp theo
thứ tự tăng dần hay không. Nếu không thì sắp xếp lại theo thứ tự tăng
dần rồi in ra màn hình kết quả.
*******************************************************************/
#include <stdio.h>

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


/* Function to check and re-arrange */

int main(){
    int c = 5, d = 10;
    
#if TEST_SWAP_FUNCTIONS 1
    double e = 3.14, f = 2.71;
    char *p = "Hello", *q = "World";
    NonPointerSwap(c,d);
    XORSwap(&c, &d);
    Swap(&c, &d);
    SWAP (c, d);
    SWAP (e, f);
    SWAP (p, q);
#endif

}