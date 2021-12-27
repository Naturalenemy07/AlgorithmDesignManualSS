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
    
    # sort names and print
