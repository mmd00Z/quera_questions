# https://quera.org/problemset/127290/

t = int(input())

answers = []

for i in range(t):
    n , a , s = list(map(int, input().split()))

    if (a+(n-1)*s)/n == int((a+(n-1)*s)/n) and int((a+(n-1)*s)/n-s) != 0:
        answers.append(int((a+(n-1)*s)/n-s))
    else:
        answers.append("-1")

print(*answers, sep="\n")
