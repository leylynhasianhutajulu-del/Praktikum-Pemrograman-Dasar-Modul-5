def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir

    print("Perkenalkan Nama Saya :", nama)
    print("Umur Saya :", umur)
    print("Saya Adalah Angkatan :", tahun_sekarang)
    print("Asal Saya dari :", asal)


while True:
    try:
        tahunLahir = int(input())
        Namaku = input().strip()
        Asal = input().strip()
    except EOFError:
        break
    Biodata(tahunLahir, Namaku, Asal)