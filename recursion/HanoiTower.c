/*
Bài toán Tháp Hà Nội
Có 3 cọc: A (nguồn), B (trung gian), C (đích).

Có n đĩa xếp chồng theo thứ tự lớn → nhỏ từ dưới lên.

Mục tiêu: di chuyển toàn bộ đĩa từ cọc A sang cọc C.

Luật:

Chỉ di chuyển 1 đĩa mỗi lần.

Không được đặt đĩa lớn lên đĩa nhỏ.
*/

#include <stdio.h>

void towerOfHanoi(int n, char A, char B, char C) {
    // Truong hop co so: Chi co 1 dia
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", A, C);
        return;
    }else{
        
    // Di chuyen n-1 dia tu A sang B, dung C lam trung gian
    // De lai 1 dia to nhat o A
    towerOfHanoi(n - 1, A, C, B);

    // Dong nay chi de in ra la di chuyen dia to nhat tu A sang C
    printf("Move disk %d from %c to %c\n", n, A, C);

    // Di chuyen n-1 dia tu B sang C, dung A lam trung gian
    towerOfHanoi(n - 1, B, A, C);
    
    }

}

int main() {
    int n = 3;  // Số đĩa
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

