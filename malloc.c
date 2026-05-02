#include <stdlib.h>
#include <stdio.h>

// return value of malloc(0) 

int main() {
    // null pointer value
    int* hehe = NULL;
    void* ptr = malloc(1);
    printf("malloc(1) returned: %p\n", ptr);
    printf("hehe is: %p\n", (void*)hehe);
    return (ptr == NULL) ? 0 : 1;
}