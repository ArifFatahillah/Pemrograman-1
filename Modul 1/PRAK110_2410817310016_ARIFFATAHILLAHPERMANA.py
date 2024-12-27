from math import sqrt

alas = 5
tinggi = 12 

print("diketahui")
print(f"Alas ={alas} cm")
print(f"tinggi ={tinggi} cm")

sisi_miring = sqrt(pow(alas,2) + pow(tinggi,2))
keliling = alas + tinggi + sisi_miring
luas = 1/2 * alas * tinggi

print("Jawab:")
print(f"Sisi A ={tinggi}cm")
print(f"Sisi B ={sisi_miring:.0f}cm")
print(f"Sisi C ={alas}cm")
print(f"keliling = {keliling:.0f}cm")
print(f"luas = {luas:.0f}cm")