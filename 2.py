import math
t = int(input())

answers = []
for i in range(t):
    x1, y1, x2, y2 = list(map(int, input().split()))
    if x1 == x2 and y1 == y2:
        answers.append(0)
    elif x1 == x2:
        s = set([i for i in [x1, y1, x2, y2] if i != 0])
        if len(s) == 1:
            answers.append(abs(max(s)))
        else:
            answers.append(abs(max(s)-min(s)))
    elif y1 == y2:
        s = set([i for i in [x1, y1, x2, y2] if i != 0])
        if len(s) == 1:
            answers.append(abs(max(s)))
        else:
            answers.append(abs(max(s)-min(s)))
    else:
        s = set([i for i in [x1, y1, x2, y2] if i != 0])
        ans1 = abs(1/4 * 2 * math.pi * abs(min(s)) + abs(max(s)-min(s)))
        ans2 = abs(x1-x2) + abs(y1-y2)
        answers.append(min(ans1 , ans2))
for i in answers:
    print(round(float(i), 12))
