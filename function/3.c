#include <stdio.h>
#include <string.h>

// ham viet thuong
void show(char abc[100]){
    char *result = abc;
    while (*result != '\0'){
        if (*result >= 'A' && *result <= 'Z'){
            *result += 32;
        }
        result++;
    }
    printf ("%s\n", abc);
}

int main(){
    char s1[100], s2[100], s3[100];
    scanf ("%s %s %s", s1, s2, s3);
    show(s1);
    show(s2);
    show(s3);
    return 0;
}