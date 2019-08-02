def is_prime(number):
    prime = True
    for n in range(2, number):
        if number % n == 0:
            prime = False
            break
    return prime


loop = int(input())
for i in range(loop):
    number = int(input())
    if is_prime(number):
        print("Prime")
    else:
        print("Not prime")
