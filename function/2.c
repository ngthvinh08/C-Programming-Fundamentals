// Hien thi string
#include <stdio.h>
#include <string.h> 

// Ham hien thi 
void show(char abc[50]){
    printf ("Hello ");
    int i = 0;
    while (abc[i] != '\0'){
        printf ("%c", abc[i]);
        i++;
    }
}

int main (){
    char name[100];
    scanf ("%s", name); // Khong phai truyen dia chi cua name vi name la 1 mang kieu char
    // Trong C mang (array) tu dong decay thanh 1 con tro, tro vao vi tri dau tien cua mang: index = 0
    show(name);
    return 0;
}