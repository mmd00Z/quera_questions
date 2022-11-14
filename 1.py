n = int(input())

a = []
for i in range(n):
    a.append(int(input()))

for i in a:
    if 0 < i < 1024:
        print(f"{i}B")
    elif 1023 < i < 1048576:
        print(f"{int(i/1024)}KiB")
    elif i > 1048575:
        print(f"{int(i/1048575)}MiB")