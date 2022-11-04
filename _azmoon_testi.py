n = int(input())
s = input()
k = int(input())

answers = []  # answer sheet
scores = []

for i in range(k):
    answers.append([])
    for j in range(n):
        answers[i].append(input())

for i in range(k):
    score = 0
    for j in range(n):
        for z in range(4)
        if answers[i][j][z] == '#':
            if s[j] == 'A' and z == 0
            score += 1
    scores.append(score)

for i in scores:
    print(i)
