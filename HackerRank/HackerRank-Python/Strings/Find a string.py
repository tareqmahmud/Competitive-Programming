def count_substring(string, sub_string):
    count = 0
    for s in range(len(string)):
        if string[s:].startswith(sub_string):
            count += 1
    return count
