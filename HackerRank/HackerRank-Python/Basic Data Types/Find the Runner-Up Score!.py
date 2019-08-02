if __name__ == "__main__":
    n = int(input())
    numbers = map(int, input().split())

    # Unique numbers list
    unique_numbers = list(set(numbers))

    # Remove the max number
    unique_numbers.remove(max(unique_numbers))

    # Fetch the second (now largest) number
    print(max(unique_numbers))
