if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
## Funtion to iterate to max
def iter_max(dim):
    dim_list = []
    for i in range(0, dim+1):
        dim_list.append(i)
    return dim_list
        
print(iter_max(x))
