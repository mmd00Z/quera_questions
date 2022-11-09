# https://quera.org/problemset/61038/
import math

n = int(input())
periodicitys: list = []
for i in range(n):
    periodicitys.append(int(input()))

max_p = max(periodicitys)
multiplication = math.prod(periodicitys)

zarib = multiplication
for i in range(1, multiplication):
    is_divisible = True
    for j in range(n):
        if (i*max_p) % periodicitys[j] != 0:
            is_divisible = False
            break
    if is_divisible:
        zarib = i
        break

print(((zarib*max_p) % 30)+1)
