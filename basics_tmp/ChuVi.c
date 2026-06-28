#include <stdio.h>
// Ham tinh chu vi
int chuvi(){
    double pi = 3.14;
    // Dinh dang %lf la double (long float) la kieu so thap phan dai vo han
    double r;
    scanf ("%lf", &r);
    printf ("Circumference = %f", 2*pi*r);
}

int main(){
    chuvi();
    return 0;
}