/******************************************************************
Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình kiểm tra xem mảng có được sắp xếp theo
thứ tự tăng dần hay không. Nếu không thì sắp xếp lại theo thứ tự tăng
dần rồi in ra màn hình kết quả.
*******************************************************************/
#include <stdio.h>

/* Swap function */
void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

/* XOR swap */
void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

/* Function to check and re-arrange */

int main(){
    int c = 5;
    int d = 10;

    swap(&c, &d);
}