if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
# Funtion to iterate to max
def iter_max(dim):
    dim_list = []
    for i in range(0, dim+1):
        dim_list.append(i)
    return dim_list
        
# get lists containing all possible numbers for each dimension i, j, k
i_set = iter_max(x)
j_set = iter_max(y)
k_set = iter_max(z)

# use nested for loops to build combination of sets, append to sum_set if not equal to n
sum_set = []
for dummy_i in i_set:
    for dummy_j in j_set:
        for dummy_k in k_set:
            if (dummy_i + dummy_j + dummy_k) != n:
                sum_set.append([dummy_i, dummy_j, dummy_k])
            else:
                pass

print(sum_set)            
