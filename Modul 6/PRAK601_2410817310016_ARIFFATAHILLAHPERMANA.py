def buat_matriks():
    baris, kolom = map(int, input("").split())
    elemen = list(map(int, input("").split()))
    for i in range(baris):
        for j in range(kolom):

            index = i * kolom + j
            print(elemen[index], end=' ')
        print()  
buat_matriks()