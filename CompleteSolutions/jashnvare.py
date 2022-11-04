# https://quera.org/problemset/104589/
n = int(input())
min_maghsoom_elayh = n

for i in range(2, n+1):
    if n%i == 0:
        min_maghsoom_elayh = min(min_maghsoom_elayh, i)
print(int(n/min_maghsoom_elayh))