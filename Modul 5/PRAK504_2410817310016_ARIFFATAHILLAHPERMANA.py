def reverse(num):
    return int(str(num)[::-1])

def main():
    A, B = map(int, input("").split())
    
    A = reverse(A)
    B = reverse(B)
    
    C = A + B
    C = reverse(C)
    print(C)

if __name__ == "__main__":
    main()