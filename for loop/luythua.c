#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf ("%d%d", &a, &b);
    int temp = 1;
    // Tinh luy thua
    while (b > 0){
        temp = temp * a;
        b--;
    }
    printf ("%d", temp);
    return 0;
}