# https://quera.org/problemset/147193/

a, b = list(map(int, input().split()))

print("infinite" if a == 0 and b == 0 else "invalid" if a == 0 else "unique")
