jumlah_detik = int(input())
hari = 0
jam = 0
menit = 0
detik = 0

if jumlah_detik >= 86400:
    hari = jumlah_detik // 86400
    jumlah_detik = jumlah_detik % 86400

if jumlah_detik >= 3600:
    jam = jumlah_detik // 3600
    jumlah_detik = jumlah_detik % 3600

if jumlah_detik >= 60:
    menit = jumlah_detik // 60
    detik = jumlah_detik % 60
else:
    detik = jumlah_detik

if hari > 0:
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik:02}")