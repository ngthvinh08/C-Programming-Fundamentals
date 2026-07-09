#include <stdio.h>
// Kiem tra so le
int sole(){
    int n;
    scanf ("%d", &n);
    if (n % 2 == 0) printf ("%d la so chan, n");
    else if (n % 2 != 0) printf ("%d la so le", n);
}

int main(){
    sole();
    return 0;
}