num_scores = int(input("Enter total number of scores: "))
scores = list(map(int, input("Enter all scores with a space between them: ").split()))

scores.sort(reverse = True)

for element in range(0, num_scores-1):
    if scores[element] > scores[element + 1]:
        print(scores[element + 1])
        break
