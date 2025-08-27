#include <stdio.h>
int main(){

    int a = 16;
    int b = 8;
    int *ptr = &a;

    printf ("Gia tri cua a: %d\n", a);
    printf ("Dia chi cua a: %p\n", (void *)&a);
    printf ("---------------------------------------------------\n");
    printf ("Dia chi cua con tro: %p\n", &ptr);
    printf ("Gia tri cua con tro (Dia chi cua a): %p\n", ptr);
    printf ("Gia tri ma con tro tro vao (Gia tri cua a): %d\n", *ptr);
    // printf ("Gia tri cua con tro: %p\n", ptr); // Dia chi cua a
    // printf ("Dia chi cua bien a: %p\n", ptr);
    // printf ("Dia chi cua bien a: %p\n", (void *) &a);
    // printf ("-----------------------------------------\n");
    // printf ("Gia tri ma con tro tro toi: %d\n", *ptr);
    // printf ("Dia chi cua con tro: %p\n", &ptr);
    
    *ptr = b;
    
    printf ("Gia tri moi cua a la: %d\n", *ptr);
    printf ("a = %d\n", a);

    ptr = &b;
    printf ("Dia chi cua b: %p\n", (void *)&b);
    printf ("Gia tri moi cua con tro (Dia chi cua b): %p\n", ptr);

    return 0;
    
    //This is a quick test of branch on github
}
