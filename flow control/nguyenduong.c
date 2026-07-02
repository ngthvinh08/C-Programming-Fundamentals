#include <stdio.h>
// Kiem tra so nguyen duong
int main(){
    int n;
    scanf ("%d", &n);
    if (n > 0) printf ("n is a positive number\n");
    else if (n < 0) printf ("n is a negative number\n");
    else printf ("n is equal to zero\n");
    return 0;
}
