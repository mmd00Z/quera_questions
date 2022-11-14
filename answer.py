# https://quera.org/problemset/14581/

n = int(input())

# all = list(map(lambda i: min(i, n-i), range(n+1)))

# print(sum(all)/len(all))

sum = 0
for i in range(int((n+1)/2)):
    sum += 2 * i

print(sum/(n+1))