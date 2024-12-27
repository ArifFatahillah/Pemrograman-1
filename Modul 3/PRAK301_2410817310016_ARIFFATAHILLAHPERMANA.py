angka1, angka2, angka3 = map(int, input(" ").split())

if angka1 < angka2 and angka1 < angka3:
    terkecil = angka1
    if angka2 < angka3:
        menengah = angka2
        terbesar = angka3
    else:
        menengah = angka3
        terbesar = angka2
elif angka2 < angka1 and angka2 < angka3:
    terkecil = angka2
    if angka1 < angka3:
        menengah = angka1
        terbesar = angka3
    else:
        menengah = angka3
        terbesar = angka1
else:
    terkecil = angka3
    if angka1 < angka2:
        menengah = angka1
        terbesar = angka2
    else:
        menengah = angka2
        terbesar = angka1

print(terkecil, menengah, terbesar)