def perkalian_baris():
    n1, n2 = map(int, input().split())
    
    if n1 != n2:
        print("Jumlah tidak sama")
        return
    
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    
    hasil = [0] * n1
    for i in range(n1):
        hasil[i] = baris1[i] * baris2[i]
    
    for i in range(n1):
        print(hasil[i], end=' ')
    print()

perkalian_baris()