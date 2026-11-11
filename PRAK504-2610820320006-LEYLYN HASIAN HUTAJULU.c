#include <stdio.h>

int reverse(int angka) {
    int hasil = 0;

    while (angka > 0) {
        int sisa = angka % 10;
        hasil = hasil * 10 + sisa;
        angka = angka / 10;
    }

    return hasil;
}

int main() {
    int A, B;

    while (scanf("%d %d", &A, &B) == 2) {
        A = reverse(A);
        B = reverse(B);

        int C = A + B;

        printf("%d\n", reverse(C));
    }

    return 0;
}