#include <stdio.h>

void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    int var1 = 5;
    int var2 = 10;
    int ketQua; 
    tinhTong(var1, var2, &ketQua);
    printf("Tong cua %d va %d la: %d\n", var1, var2, ketQua);

    return 0;
}

