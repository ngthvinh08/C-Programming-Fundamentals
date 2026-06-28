#include <stdio.h>
int main(){

    int a = 16;
    int b = 8;

    int *ptr = &a;


    printf ("Dia chi cua con tro: %p\n", &ptr);
    printf ("Gia tri cua con tro (Dia chi cua a): %p\n", ptr);
    printf ("Gia tri ma con tro tro vao (Gia tri cua a): %d\n", *ptr);

    return 0;
    
}
