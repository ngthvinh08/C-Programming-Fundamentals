#include <stdio.h>
int main(){
    int n;
    scanf ("%d", &n);
    int i = 1;
    int number = 0;
    while (i <= n){
        if (n % i == 0){
            number++;
        }
        i++;
    }
    printf ("%d", number);
    return 0;
}