def rotateLeft(d, arr):
    # store length as constant
    arr_len = len(arr)
    
    # Use a temp array to store data-prefill with zeros to access positions
    temp_array = [0]*arr_len

    # need to use modular mathematics to put the number in the correct position
    for arr_pos in range(0, len(arr)):
        temp_arr_pos = (arr_len + arr_pos - d) % arr_len
        temp_array[temp_arr_pos] = arr[arr_pos]
    
    return(temp_array)
