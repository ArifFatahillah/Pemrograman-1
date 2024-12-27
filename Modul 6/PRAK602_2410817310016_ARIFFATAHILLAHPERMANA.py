def hitung_zetsu_putih():
    jumlah_ruangan = int(input())
    zetsu_putih = list(map(int, input().split()))
    
    hasil = []
    for i in range(jumlah_ruangan):
        hasil += [zetsu_putih[i] * (i + 1)]
    
    for zetsu in hasil:
        print(zetsu, end=' ')
    print()

hitung_zetsu_putih()