# https://quera.org/problemset/4066/

dictionary = {key : val for key, val in [input().split() for i in range(list(map(int, input().split()))[0])]}
txt = input().split()
print(*[dictionary[txt[i]] + " kachal!" if txt[i] in dictionary.keys() else "kachal!" for i in range(len(txt))], sep=' ')


# n, m = list(map(int, input().split()))
# dictionary = {key : val for key, val in [input().split() for i in range(n)]}
# # print(dictionary)
# txt = input().split()
# # for i in range(len(txt)):
# #     if txt[i] in dictionary.keys():
# #         txt[i] = dictionary[txt[i]] + " kachal!"
# #     else:
# #         txt[i] = "kachal!"
# print(*txt, sep=' ')