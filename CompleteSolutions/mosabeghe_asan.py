# https://quera.org/problemset/2439/
import math

day, num = list(map(int, input().split()))

print(str(math.factorial(day)).count(str(num)))
