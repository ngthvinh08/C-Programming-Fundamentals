#include <stdio.h>
#include <stdlib.h>

// So lon nhat
int main(){
    int a,b,c;
    int *max = malloc(sizeof(int));
    if (max == NULL){
        perror ("Loi");
        return 1;
    }
    scanf ("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c){
        *max = a;
    }else if (b >= a && b >= c) {
        *max = b;
    }else{
        *max = c;
    }
    printf ("%d\n", *max);
    free (max);
    return 0;
}