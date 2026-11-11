def MaxBilangan(a, b, c, d):
    maks = a
    if b > maks:
        maks = b
    if c > maks:
        maks = c
    if d > maks:
        maks = d
    return maks


# Setiap baris input diproses sendiri. Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    data = baris.split()
    while len(data) < 4:
        try:
            data += input().split()
        except EOFError:
            break

    a = int(data[0])
    b = int(data[1])
    c = int(data[2])
    d = int(data[3])

    hasil = MaxBilangan(a, b, c, d)
    print(hasil)