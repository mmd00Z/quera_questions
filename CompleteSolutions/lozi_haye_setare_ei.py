# https://quera.org/problemset/9773/

n = int(input())

k = 1
for i in range(int((n+1)/2)):
    print((" "*(int((n-k)/2))+"*"*k+" "*(int((n-k)/2)))*2)
    k += 2
k += -2
for i in range(int((n+1)/2-1)):
    k += -2
    print((" "*(int((n-k)/2))+"*"*k+" "*(int((n-k)/2)))*2)
