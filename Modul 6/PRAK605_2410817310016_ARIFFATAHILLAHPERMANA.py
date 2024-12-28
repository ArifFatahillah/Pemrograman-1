n = int(input())
print("Matriks A")
A = [[0] * n for _ in range(n)]
for i in range(n):
    row = input().split()
    for j in range(n):
        A[i][j] = int(row[j])
print("Matriks B")
B = [[0] * n for _ in range(n)]
for i in range(n):
    row = input().split()
    for j in range(n):
        B[i][j] = int(row[j])
C = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]
print("Matriks AXB")
for i in range(n):
    for j in range(n):
        print(C[i][j], end=' ')
    print()