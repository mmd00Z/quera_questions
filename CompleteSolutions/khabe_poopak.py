# https://quera.org/problemset/15124/

a, b, x = list(map(int, input().split()))

# functions write with chatGPT help

# def divisors(n):
#     result = []
#     for i in range(1, n+1):
#         if n % i == 0:
#             result.append(i)
#     return result

# def count_pairs(list1, list2, n):
#     count = 0
#     for x in list1:
#         for y in list2:
#             if x + y <= n:
#                 count += 1
#     return count

def divisors(n):
    return [i for i in range(1, n+1) if n % i == 0]

def count_pairs(list1, list2, n):
    return sum([1 for x in list1 for y in list2 if x + y <= n])

print(count_pairs(divisors(a), divisors(b), x))