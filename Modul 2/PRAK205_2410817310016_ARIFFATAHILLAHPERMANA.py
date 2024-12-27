tinggi1, sisi_miring1 = map(float, input().split())

alas1 = (sisi_miring1**2 - tinggi1**2)**0.5

keliling1 = alas1 + tinggi1 + sisi_miring1
luas1 = (alas1 * tinggi1) / 2

print(f"Alas = {round(alas1)} cm")
print(f"Tinggi = {round(tinggi1)} cm")
print(f"Sisi Miring = {round(sisi_miring1)} cm")
print(f"Keliling = {round(keliling1)} cm")
print(f"Luas = {round(luas1)} cm^2")

tinggi2 = float(input())
sisi_miring2 = float(input())

alas2 = (sisi_miring2**2 - tinggi2**2)**0.5

keliling2 = alas2 + tinggi2 + sisi_miring2
luas2 = (alas2 * tinggi2) / 2

print(f"Alas = {round(alas2)} cm")
print(f"Tinggi = {round(tinggi2)} cm")
print(f"Sisi Miring = {round(sisi_miring2)} cm")
print(f"Keliling = {round(keliling2)} cm")
print(f"Luas = {round(luas2)} cm^2")