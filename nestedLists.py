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
    
    # Go through scores and get the second lowest grade, set indexes in a list
    # we cannot assume that there is only 1 highest score
    sls = 0
    sorted_temp_scores = temp_scores.copy()
    sorted_temp_scores.sort()
    r_sorted_temp_scores = sorted_temp_scores.copy()
    for i in sorted_temp_scores:
        if i == sorted_temp_scores[0]:
            r_sorted_temp_scores.remove(i)
    sls = r_sorted_temp_scores[0]
    
    slIndexes = []
    for j in range(0,len(temp_scores)):
        if temp_scores[j] == sls:
            slIndexes.append(j)
    
    # get indexes with the highest score
    slNames = []
    for k in slIndexes:
        slNames.append(temp_names[k])
    
    # sort and print
    slNames.sort()
    for i in slNames:
        print(i)
