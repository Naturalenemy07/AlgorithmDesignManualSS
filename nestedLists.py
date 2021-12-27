if __name__ == '__main__':
    # build record, get inputs
    records = []
    for i in range(int(input())):
        name = input()
        score = float(input())
        records.append([name, score])
    
    # sort records by score using lambda function
    records.sort(key = lambda ind_score: ind_score[1])
    
    # get all second lowest scores with names
    temp_scores = []
    temp_names = []
    for record in records:
        temp_names.append(record[0])
        temp_scores.append(record[1])
    
    print(temp_scores)
    
    # Go through scores and get the second lowest grade, set index
    shs = 0
    shsIndex = 0
    for i in range(len(temp_scores)):
        pass

    # get indexes with the highest score
    shNames = []
    for i in range(0, len(temp_scores)):
        if temp_scores[i] == shs:
            shNames.append(temp_names[i])
    
    # sort and print
    shNames.sort()
    for i in shNames:
        print(i)
