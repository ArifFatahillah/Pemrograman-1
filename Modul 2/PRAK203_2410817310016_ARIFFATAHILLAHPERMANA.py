a1, b1, i1, j1, x1, y1 = map(int, input().split())

hasil1 = (((a1 - b1) * i1) / j1) - (x1 + y1)
print(f"{hasil1:.3f}")

a2, b2 = map(int, input().split())
i2, j2 = map(int, input().split())
x2, y2 = map(int, input().split())

hasil2 = (((a2 - b2) * i2) / j2) - (x2 + y2)
print(f"{hasil2:.3f}")