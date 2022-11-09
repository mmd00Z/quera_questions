# https://quera.org/problemset/69903/
m1, d1 = list(map(int, input().split()))
m2, d2 = list(map(int, input().split()))

num1 = 0
for i in range(1, m1):
    if i <= 6:
        num1 += 31
    elif i == 12:
        num1 += 29
    else:
        num1 += 30

num2 = 0
for i in range(1, m2):
    if i <= 6:
        num2 += 31
    elif i == 12:
        num2 += 29
    else:
        num2 += 30

print(abs((num1+d1)-(num2+d2)))
