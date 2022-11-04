# https://quera.org/problemset/145639/
s, f, l, x = list(map(int, input().split()))
if x < s:
    print("exam did not started!")
elif x >= f:
    print("exam finished!")
# elif f - x < l:
#     print(f-x)
else:
    print(f-x)