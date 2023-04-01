# https://quera.org/problemset/590/
# writed with chatGPT

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // gcd(a, b)

n , m = list(map(int, input().split()))

print(gcd(n, m), lcm(n, m))