# https://quera.org/problemset/7998/

n = int(input())
caps = False
output = ""
for i in range(n):
 inp = str(input())
 if inp == "CAPS":
  caps = not caps
 elif caps:
  output += inp.upper()
 else:
  output += inp
print(output)