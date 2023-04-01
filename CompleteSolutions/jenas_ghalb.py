# https://quera.org/problemset/308/

# writed with chatGPT
def is_palindrome(s):
    """Checks if the given string is a palindrome"""
    return s == s[::-1]

inp = [x.lower() for x in list(input().strip()) if x.isalpha() or x.isnumeric()]

print("YES" if is_palindrome(inp) else "NO")