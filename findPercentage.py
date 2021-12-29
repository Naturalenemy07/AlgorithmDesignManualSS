if __name__ == '__main__':
    num_students = int(input())
    student_marks = {}
    for _ in range(num_students):
        name, *line = input().split()
        # map(function, iterable) - applies the function to the iterable-makes them a float, makes them a list
        scores = list(map(float, line))
        # names is the key, the list scores are the value name: scores
        student_marks[name] = scores
    query_name = input()
    
    # get key and iterate through scores to get average
    sums = 0
    for score in student_marks[query_name]:
        sums += score
    # print average, make 2 decimals
    print(format(sums/len(student_marks[query_name]),'.2f'))
