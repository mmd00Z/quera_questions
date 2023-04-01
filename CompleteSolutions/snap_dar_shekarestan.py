n , m = [int(x) for x in input().split()]

A = []
travels = []

for i in range(n):
    A.append([int(x) for x in input().split()])

answer = 0
for i in range(m):
    x , y = [int(x)-1 for x in input().split()]
    answer += A[x][y]

print(answer)