# https://quera.org/problemset/28948/

s = list(input())

i = 0
while i < len(s):
    if s[i] == '=':
        s.pop(i)
        if i > 0:
            s.pop(i-1)
            i -= 1
        # After removing two characters, decrease the index by 1
        i -= 1 if i < 0 else 0
    else:
        i += 1

print(''.join(s))
