#include <stdio.h>
int main(){
    int a, b;
    char c;
    scanf ("%d %d %c", &a, &b, &c);
    switch (c)
    {
    case '+':
        printf ("a + b = %d\n", a + b);
        break;
    case '-':
        printf ("a - b = %d\n", a - b);
    case '/':
        printf ("a / b = %d\n", a / b);
    case '*':
        printf ("a * b = %d\n", a * b);
    default:
        printf ("Invalid value\n");
        break;
    }
    return 0;
}