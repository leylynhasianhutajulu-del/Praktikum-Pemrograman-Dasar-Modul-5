
def maksimal(a, b):
    if a > b:
        return a
    else:
        return b


def minimal(a, b):
    if a < b:
        return a
    else:
        return b


while True:
    try:
        bilangan = int(input())

        nilai = []
        while len(nilai) < bilangan:
            nilai += list(map(int, input().split()))

        batas = 0
        maks = -100000
        minim = 100000

        while batas < bilangan:
            maks = maksimal(maks, nilai[batas])
            minim = minimal(minim, nilai[batas])
            batas += 1

        print(maks, minim)

    except EOFError:
        break
