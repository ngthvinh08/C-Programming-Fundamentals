/*
Viết một chương trình C sử dụng hàm để hoán đổi giá trị của hai biến số nguyên bằng cách 
sử dụng con trỏ.
*/

#include <stdio.h>

void swap (char *a, char *b){
    char c = *a;
    *a = *b;
    *b = c;
}

int main (){
    char x, y;
    printf ("Nhap vao cac ky tu: ");
    scanf ("%c", &x);
    scanf ("%c", &y);
    swap(&x,&y);
    printf ("Sau khi hoan doi: %c %c", x, y);
    return 0;
}

// Another test
