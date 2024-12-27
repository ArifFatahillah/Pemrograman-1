def hitung(nilai1, nilai2):
    return nilai1 - nilai2 

def mutlak(angka):
    return -angka if angka < 0 else angka 

def main():
    a, b, c, d = map(int, input().split())
    Hasil = mutlak(hitung(a, c)) + mutlak(hitung(b, d))
    print(Hasil)

if __name__ == "__main__":
    main()