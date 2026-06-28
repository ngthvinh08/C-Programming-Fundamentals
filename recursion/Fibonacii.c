#include <stdio.h>

int fibo (int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return fibo (n-1) + fibo(n-2);
}

int main(){
    int n;
    scanf ("%d", &n);
    int result = fibo(n);
    printf ("F(%d) is %d\n", n, result);
    printf ("F(%d) is %d\n", n+1, fibo(n+1));
    return 0;
}