n = int(input())
t = list(map(int, input().split()))

for i in t:
    if i > 15:
        print("cooler")
    else:
        print("heater")
