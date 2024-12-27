pi = 22.0 / 7.0

jari_jari1 = float(input())
tinggi1 = float(input())

volume1 = pi * (jari_jari1 ** 2) * tinggi1
luas1 = 2 * pi * jari_jari1 * (jari_jari1 + tinggi1)
keliling1 = 2 * pi * jari_jari1

print(f"Volume = {volume1:.2f}")
print(f"Luas = {luas1:.2f}")
print(f"Keliling = {keliling1:.2f}")

jari_jari2, tinggi2 = map(float, input().split())

volume2 = pi * (jari_jari2 ** 2) * tinggi2
luas2 = 2 * pi * jari_jari2 * (jari_jari2 + tinggi2)
keliling2 = 2 * pi * jari_jari2

print(f"Volume = {volume2:.2f}")
print(f"Luas = {luas2:.2f}")
print(f"Keliling = {keliling2:.2f}")