loop = int(input())

phoneBook = {}

# Generate Dictionary with user inputted data
for i in range(loop):
    name, number = input().strip().split()
    number = int(number)
    phoneBook[name] = number

# Search number based on query
for i in range(loop):
    try:
        query = input().strip()
        print("{}={}".format(query, phoneBook[query]))
    except KeyError:
        print("Not found")
