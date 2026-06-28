/*
Bạn hãy viết hàm hiển thị ra màn hình các số chia hết cho 3 và không chia hết cho 5 từ 1 tới 100.
*/
#include <stdio.h>

int funct(){
    for (int i = 1; i <= 100; i++){
        if (i % 3 == 0 && i % 5 != 0){
            printf ("%d ", i);
        }
    }
}

int main(){
    funct();
    return 0;
}
