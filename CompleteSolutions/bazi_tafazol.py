# https://quera.org/problemset/87176/
def game(number):
    return int(max(number % 10, (number-(number % 10))/10)-min(number % 10, (number-(number % 10))/10))
