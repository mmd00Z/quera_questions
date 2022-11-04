# https://quera.org/problemset/102261/
import math
q = int(input())

answers = []

count = 0
for i in range(q):
    l , r = list(map(int, input().split()))
    for j in range(l, r+1):
        if round(math.sqrt(j), 0)**2 == j:
            count += 1
        # for k in range(1, j+1):
        #     if k**2 == j:
        #         count += 1
        #         break
    answers.append(count)
    count = 0

for i in answers:
    print(i)