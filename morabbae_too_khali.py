# https://quera.org/problemset/283/

a = int(input())
b = int(input())
if a <= b:
 print("Wrong order!")
elif (a-b)%2 != 0:
 print("Wrong difference!")
else:
 # make a*a matrix
 for i in range(a):
  for j in range(a):
   if (i < (a-b)/2) or (i >= ((a-b)/2)+b):
    print("*", end=" ")
   elif (j < (a-b)/2) or (j >= ((a-b)/2)+b):
    print("*", end=" ")
   else:
    print(" ", end=" ")
  print("")
   