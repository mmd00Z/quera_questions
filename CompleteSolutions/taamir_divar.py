# https://quera.org/problemset/6580/
x, y = list(map(int, input().split()))
r = int(input())
dx, dy = list(map(int, input().split()))

if (x <= dx <= x+r) and (y-r <= dy <= y):
    print("Mahdi")
else:
    print("Parsa")
