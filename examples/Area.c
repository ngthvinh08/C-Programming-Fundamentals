#include <stdio.h>

// Ham tinh dien tich hinh chu nhat
int area (int length, int width){
    return length * width;
}

int main (){
    int S = area (5, 10);
    printf ("The area is: %d\n", S);
    return 0;
}