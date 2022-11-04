# https://quera.org/problemset/110014/
h1 = input()
h2 = input()

if h1[0]==h1[2] or h1[0]==h2[2] or h1[2]==h2[0] or h2[2]==h2[0]: print("YES")
else: print("NO")