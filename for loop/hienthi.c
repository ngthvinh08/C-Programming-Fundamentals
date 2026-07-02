/*
Bạn hãy viết chương trình hiển thị ra màn hình các số có số 0 ở cuối từ 1 tới 1000 
(màn hình sẽ hiển thị lên các số 10, 20, 30, ..., 990, 1000)
*/
#include <stdio.h>
int main(){
    int i = 1;
    do {
        if (i % 10 == 0){
            printf ("%d ", i);
        }
        i++;
    } while (i <= 1000);
    return 0;
}