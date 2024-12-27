n, kelipatan = map(int, input("").split())
total = 0
for i in range(1, n + 1):
    jumlah_kelipatan = 0
    for j in range(1, i + 1):
        jumlah_kelipatan += j * kelipatan
        if j > 1:
            print(" + ", end="")
        print(f"({j} * {kelipatan})", end="")
    
    print(f" = {jumlah_kelipatan}")
    total += jumlah_kelipatan
print(total)