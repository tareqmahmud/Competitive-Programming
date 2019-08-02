if __name__ == "__main__":
    N = int(input())
    data = []

    while N != 0:
        command = input()
        if "print" in command:
            print(data)
        elif "insert" in command:
            tmp, index, value = command.split(" ")
            data.insert(int(index), int(value))
        elif "remove" in command:
            tmp, index = command.split(" ")
            data.remove(int(index))
        elif "append" in command:
            tmp, value = command.split(" ")
            data.append(int(value))
        elif "sort" in command:
            data.sort()
        elif "pop" in command:
            data.pop()
        elif "reverse" in command:
            data.reverse()
        N -= 1
