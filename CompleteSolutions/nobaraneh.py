# https://quera.org/problemset/104588/
a = list(map(int, input().split()))
n_red = 0

for i in range(5):
 if a[i] >= 80: n_red+=1

if n_red >= 3: print("Mamma mia!")
elif n_red >= 1: print("Mamma mia!!")
else: print("Mamma mia!!!")