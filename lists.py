if __name__ == '__main__':
    N = int(input())
    # initialize list, take commands
    n_list = []
    for dummy_i in range(0,N):
        command = str(input()).rsplit(" ")
        
        # Insert Command
        if command[0] == "insert":
            pos = int(command[1])
            iint = int(command[2])
            n_list.insert(pos,iint)
        
        # Print Command
        elif command[0] == "print":
            print(n_list)
        
        # Remove Command
        elif command[0] == "remove":
            rint = int(command[1])
            n_list.remove(rint)
        
        # Append Command
        elif command[0] == "append":
            aint = int(command[1])
            n_list.append(aint)
            
        # Sort Command
        elif command[0] == "sort":
            n_list.sort()
        
        # Pop Command
        elif command[0] == "pop":
            n_list.pop()
            
        # Reverse Command
        elif command[0] == "reverse":
            n_list.reverse()
