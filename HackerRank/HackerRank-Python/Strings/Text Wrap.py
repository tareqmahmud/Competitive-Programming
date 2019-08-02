def wrap(string, max_width):
    count = 0
    return_string = ""
    for word in string:
        if count == max_width:
            return_string += "\n"
            count = 0
        return_string += word
        count += 1
    return return_string
