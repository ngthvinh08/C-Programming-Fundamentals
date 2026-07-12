/* Non-pointer swap function */
/* The original value won't be affected */
void NonPointerSwap(int a, int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
}

/* Swap function */
void Swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

/* XOR swap */
void XORSwap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

