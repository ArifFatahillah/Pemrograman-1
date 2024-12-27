batas_maksimal = int(input(""))
for i in range(1, batas_maksimal + 1, 2):
    print(i, end=' ')
print()
for i in range(batas_maksimal, 1, -1):
    if i % 2 == 0:
        print(i, end=' ')  