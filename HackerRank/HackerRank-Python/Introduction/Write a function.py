def is_leap(year):
    leap = False

    # Leap year logic
    if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
        leap = True

    return leap
