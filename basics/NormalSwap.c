#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;

    a = a + b; 
    b = a - b;
    a = a - b;

printf ("Value of a and b after swapping are: %d %d\n", a, b);
    return 0;
}