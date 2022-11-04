# https://quera.org/problemset/3109/

n = int(input())
i = 0

while 2**i <= n:
    if 2**i == n:
        print("Yes")
        break
    i += 1

if 2**i != n:
    print("No")
