# https://quera.org/problemset/110015/
k = int(input())
ki = 0

for i in range(8):
 if i%2 == 0:
  print("########.......########")

 else:
  if ki < k:
   ki+=1
   print("#ghorfe{}".format(ki), end="")
  else:
   print("#"+"."*7, end="")

  print("."*7, end="")

  if ki < k:
   ki+=1
   print("ghorfe{}#".format(ki))
  else:
   print("."*7+"#")
print("#"*23)