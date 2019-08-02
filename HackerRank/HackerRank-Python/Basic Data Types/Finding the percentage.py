if __name__ == "__main__":
    n = int(input())
    students = {}
    for _ in range(n):
        name, *line = input().split()
        scores = map(float, line)
        students[name] = scores
    query_name = input()

    student_numbers = list(students[query_name])
    total_number = sum(student_numbers)
    average_number = total_number / len(student_numbers)
    print("{:0.2f}".format(average_number))
