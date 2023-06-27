# https://quera.org/problemset/10233/

def generate_numbers(digits):
    if len(digits) == 1:
        return digits
    result = []
    for i in range(len(digits)):
        remaining_digits = digits[:i] + digits[i+1:]
        sub_numbers = generate_numbers(remaining_digits)
        for sub_number in sub_numbers:
            result.append(digits[i] + sub_number)
    return result

x = int(input())
numbers = sorted(list(map(int, set(generate_numbers(list(str(x)))))))
print(0 if numbers.index(x)+1 >= len(numbers) else numbers[numbers.index(x)+1])