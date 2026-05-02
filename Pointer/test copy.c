#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;
    int *p = &a;

    // In ra gia tri cua p
    printf ("Dia chi cua a: %p\n", p);

    // In ra gia tri tai o nho ma p tro toi
    printf ("Gia tri cua a: %d\n", *p);

    // In ra dia chi cua con tro p
    printf ("Dia chi cua con tro p: %p\n", &p);

    // Swap a va b
    *p = b;
    b = a;
    a = *p;
    printf ("Sau khi swap: a = %d, b = %d\n", a, b);

    typedef struct Point {
        int x;
        int y;
    } test_pointer_t;

    // Dung con tro kieu point de truy cap vao cac thanh phan
    test_pointer_t point = {3, 4};
    test_pointer_t *ptr = &point;   
    printf ("Diem co toa do x = %d, y = %d\n", ptr->x, ptr->y);
}