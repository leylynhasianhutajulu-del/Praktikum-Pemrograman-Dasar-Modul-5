#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int maks = a;
    if (b > maks)
        maks = b;
    if (c > maks)
        maks = c;
    if (d > maks)
        maks = d;
    return maks;
}

int main() {
    char baris[100];
    int a, b, c, d;

    /* Setiap baris input diproses sendiri. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        if (sscanf(baris, "%d %d %d %d", &a, &b, &c, &d) != 4)
            break;
        int hasil = MaxBilangan(a, b, c, d);
        printf("%d\n", hasil);
    }
    return 0;
}