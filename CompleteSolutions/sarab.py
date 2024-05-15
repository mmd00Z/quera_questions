# https://quera.org/problemset/4067

t = int(input())

for i in range(t):
    x, y = map(int, input().split())

    if(x == y or x - y == 2):
        print(x + y if x % 2 == 0 else x + y - 1)
    else:
        print(-1)

# for i in range(t):
#     x, y = map(int, input().split())

#     if(x == y):
#         print(x * 2 if x % 2 == 0 else x * 2 - 1)
#     elif(x - y == 2):
#         print(x + y if x % 2 == 0 else x + y - 1)
#     else:
#         print(-1)