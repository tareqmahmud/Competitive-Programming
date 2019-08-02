def capitalize(string):
    list_words = string.split(" ")
    for index in range(len(list_words)):
        if list_words[index].strip() != "":
            list_words[index] = list_words[index][0].upper() + list_words[index][1:]
    return " ".join(list_words)