def print_formatted(number):
    for num in range(1, number + 1):
        decimal = num
        octal = oct(num).replace('0o', '')
        hexa = hex(num).replace('0x', '').capitalize()
        binary = bin(num).replace('0b', '')
        print(' ' + str(decimal), end='  ')
        print(octal, end='  ')
        print(hexa, end='  ')
        print(binary)
