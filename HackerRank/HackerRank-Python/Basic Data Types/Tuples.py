if __name__ == "__main__":
    n = int(input())
    integer_list = map(int, input().split())
    result = []
    for value in integer_list:
        result.append(value)

    result = tuple(result)
    hash_result = hash(result)
    print(hash_result)
