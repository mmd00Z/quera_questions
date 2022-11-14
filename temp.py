x1 , y1 , x2, y2 = list(map(int, input().split()))
s = set([i for i in [x1 , y1 , x2, y2] if i != 0]) 
print(s)