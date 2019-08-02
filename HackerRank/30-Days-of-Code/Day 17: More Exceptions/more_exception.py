loop = int(input())

for i in range(loop):
    try:
        n, p = map(int, input().strip().split())
        if n < 0 or p < 0:
            raise ValueError("n and p should be non-negative")
        else:
            print(pow(n, p))
    except ValueError as e:
        print(e)
