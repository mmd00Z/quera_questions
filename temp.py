# x1 , y1 , x2, y2 = list(map(int, input().split()))
# s = set([i for i in [x1 , y1 , x2, y2] if i != 0]) 
# print(s)

# [x := input(), x := "test", print(x)]
[h := int(input()), print(*[(h-i)*" "+i*"#"+"  "+i*"#" for i in range(1, h+1)], sep="\n")]


[h := int(input()), print(*list(map(lambda i: (h-i)*" "+i*"#"+"  "+i*"#", range(1, h+1))), sep="\n")]