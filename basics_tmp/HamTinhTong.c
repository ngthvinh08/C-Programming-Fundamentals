#include <stdio.h>
int sumof(int a, int b){
    return a + b;
}

int main(){
    int sum = sumof(3, 55);
    printf ("Tong la: %d", sum);
    return 0;
}