def decipher(kata, kode):
    if kata == '' or kode == '':
        print("Panjang kalimat berbeda, pesan palsu")
        return
    
    bintang = 0
    pagar = 0
    hasil = ""

    i = 0
    while True:
        if kata[i:i+1] == '' or kode[i:i+1] == '':
            break
        
        if kata[i] == kode[i] and kata[i] != ' ':
            hasil += '*'
            bintang += 1
        elif (kata[i] != kode[i] and kata[i] != ' ') or (kode[i] != ' '):
            hasil += '#'
            pagar += 1
        else:
            hasil += ' '
        
        i += 1

    if kata[i:i+1] != '' or kode[i:i+1] != '':
        print("Panjang kalimat berbeda, pesan palsu")
        return

    print(hasil)
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

if __name__ == "__main__":
    kata = input()
    kode = input()
    
    decipher(kata, kode)