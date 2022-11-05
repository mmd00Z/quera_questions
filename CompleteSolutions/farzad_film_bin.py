# https://quera.org/problemset/655/

n = int(input())

movie_names = []
for i in range(n):
    movie_names.append(input())

print(*list(map(lambda i: movie_names[i].title(), range(n))), sep="\n")
