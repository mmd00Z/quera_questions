# https://quera.org/problemset/14581/

n = int(input())
n2 = n // 2
_sum = n2 if n % 2 == 0 else 2 * n2
_sum += (n2-1) * (n2)
print(_sum / (n+1))

# 3
#  | | |
# 0 1 1 0

# 4
#  | | | |
# 0 1 2 1 0

# 5
#  | | | | |
# 0 1 2 2 1 0

# 6
#  | | | | | |
# 0 1 2 3 2 1 0

# _sum = n//2
# if n % 2 == 0:
#     for i in range(n//2):
#         _sum += i * 2
# else:
#     _sum += n//2
#     for i in range(n//2):
#         _sum += i * 2
# print(_sum / (n+1))