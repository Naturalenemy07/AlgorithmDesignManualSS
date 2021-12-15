def compareTriplets(a, b):
    #compare lengths, if not equal return error
    if len(a) != len(b):
        raise TypeError("Arrays are not the same length.")
    
    # initialize array of scores, first is Alice's score, second is Bob's score
    score_arr = [0,0]
    
    # iterate through the input arrays comparing each index, adding points as required
    for i in range(0,len(a)):
        if a[i] > b[i]:
            score_arr[0] += 1
        elif a[i] < b[i]:
            score_arr[1] += 1
        else:
            pass
    return score_arr
