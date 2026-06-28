#include <stdio.h>

int fibo_loop (int n){
    int a = 0;
    int b = 1;
    int c;
    if (n == 0) return a;
    if (n == 1) return b;
    else {
        for (int i = 2; i <= n; i++){
            c = a+b;
            a = b;
            b = c;
        }
    }
    return c;
}

int main(){
    int n = 5;
    int result = fibo_loop(n);
    printf ("F(%d) is  %d\n", n, result);
    return 0;
}