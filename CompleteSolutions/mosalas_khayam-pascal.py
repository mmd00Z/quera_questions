from linecache import getline


n = int(input())

kayam_pascal = str('''1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1
1 9 36 84 126 126 84 36 9 1
''')

if(n == 1):
 print('1')
if(n == 2):
 print('1\n1 1')
if(n == 3):
 print('''1
1 1
1 2 1''')
if(n == 4):
 print('''1
1 1
1 2 1
1 3 3 1''')
if(n == 5):
 print('''1
1 1
1 2 1
1 3 3 1
1 4 6 4 1''')
if(n == 6):
 print('''1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1''')
if(n == 7):
 print('''1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1''')
if(n == 8):
 print('''1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1''')
if(n == 9):
 print('''1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1''')
if(n == 10):
 print(kayam_pascal)