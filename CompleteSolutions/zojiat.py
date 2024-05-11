# https://quera.org/problemset/140035
### better version
def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True


print("zoj" if is_prime(n := int(input())) and n % 2 == 1 else "fard")


### old version

# from math import sqrt
# def isPrime(n):
#     if(n <= 1): return False
#     for i in range(2, int(sqrt(n))+2):
#         if n % i == 0:
#             return False
#     return True

# n = int(input())

# if isPrime(n):
#     print("zoj")
# else:
#     print("fard")
