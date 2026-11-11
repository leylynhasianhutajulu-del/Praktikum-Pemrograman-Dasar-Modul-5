def hitung(nilai1, nilai2):
    if nilai1 > nilai2:
        return nilai1 - nilai2
    else:
        return nilai2 - nilai1


def mutlak(angka):
    if angka < 0:
        return -angka
    else:
        return angka


# Setiap baris input (x1 y1 x2 y2) diproses sendiri. Tekan Enter pada baris kosong untuk berhenti.
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
    c = int(data[1])
    b = int(data[2])
    d = int(data[3])

    Hasil = hitung(a, b) + hitung(c, d)
    print(mutlak(Hasil))