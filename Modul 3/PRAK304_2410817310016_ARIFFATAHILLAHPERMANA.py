x = int(input())
if x == 0:
    print("Nol")
elif x >= 1 and x <= 9:
    print("Satuan")
elif x >= 11 and x <= 19:
    print("Belasan")
elif (x >= 20 and x <= 99) or x == 10:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")