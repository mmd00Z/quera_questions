def isPrime(n):
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True


n = int(input())
print(isPrime(n))
if isPrime(n) and n % 2 != 0:
    print("zoj")
else:
    print("fard")
