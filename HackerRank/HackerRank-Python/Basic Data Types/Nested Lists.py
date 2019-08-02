if __name__ == "__main__":
    n = int(input())
    students = []
    for _ in range(n):
        name = input()
        score = float(input())
        students.append([name, score])

    # get the scores
    scores = set([students[x][1] for x in range(n)])  # (5, 4, 3, 1)
    scores = list(scores)  # [5, 4, 3, 1]
    scores.sort()  # [1, 3, 4, 5]

    # get the students who got second lowest
    students = [students[x][0] for x in range(n) if scores[1] == students[x][1]]  # [b_lowest, a_lowest]
    students.sort()  # [a_lowest, b_lowest]

    # print the student name who got second lowest
    for name in students:
        print(name)
