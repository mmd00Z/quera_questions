# https://quera.org/problemset/148099/
n = int(input())
a = list(map(int, input().split()))

yekta_ha = []
for i in range(n):
    is_yekta = True
    for j in range(n):
        if a[i] == a[j] and i != j:
            is_yekta = False
            break;
    if is_yekta:
        yekta_ha.append(a[i])

if len(yekta_ha) <= 0:
    print("0")
else:
    ans = yekta_ha[0]
    for i in range(1, len(yekta_ha)):
        ans ^= yekta_ha[i]
    print(ans)
