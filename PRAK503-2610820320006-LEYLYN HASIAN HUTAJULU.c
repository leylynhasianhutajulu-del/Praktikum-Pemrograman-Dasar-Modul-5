
#include <stdio.h>

int maksimal(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int minimal(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;
    int nilai;

    while (scanf("%d", &bilangan) == 1) {
        batas = 0;
        maks = -100000;
        minim = 100000;

        while (batas < bilangan) {
            scanf("%d", &nilai);

            maks = maksimal(maks, nilai);
            minim = minimal(minim, nilai);

            batas++;
        }

        printf("%d %d\n", maks, minim);
    }

    return 0;
}
