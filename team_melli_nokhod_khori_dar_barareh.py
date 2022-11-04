# https://quera.org/problemset/10163/
abc = list(map(int, input().split()))
time = []

for i in range(3):
    start, end = list(map(int, input().split()))
    time.append(range(start, end))

sum = 0

for i in range(100):
    present_number = 0
    for j in range(3):
        if i in time[j]:
            present_number += 1
    if present_number > 0:
        sum += present_number * abc[present_number-1]

print(sum)
