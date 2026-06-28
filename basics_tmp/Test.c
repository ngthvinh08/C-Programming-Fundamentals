#include <stdio.h>
#include <stddef.h> // For size_t and %zu

int main() {
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of int pointer: %zu bytes\n", sizeof(int *));
    return 0;
}