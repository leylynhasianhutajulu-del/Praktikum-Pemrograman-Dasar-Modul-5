#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2) {
    if (nilai1 > nilai2)
        return nilai1 - nilai2;
    else
        return nilai2 - nilai1;
}

int mutlak(int angka) {
    if (angka < 0)
        return -angka;
    else
        return angka;
}

int main()
{
    char baris[100];
    int a, b, c, d;

    /* Setiap baris input (x1 y1 x2 y2) diproses sendiri. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        if (sscanf(baris, "%d %d %d %d", &a, &c, &b, &d) != 4)
            break;
        int Hasil = hitung(a, b) + hitung(c, d);
        printf("%d\n", mutlak(Hasil));
    }
    return 0;
}