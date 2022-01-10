def swap_case(s):
    return s.swapcase()

def split_and_join(line):
    ss_line = "-".join(line.split(" "))
    return ss_line

def print_full_name(first, last):
    print("Hello", first, last + "!", "You just delved into python.")
    return
    
def count_substring(string, sub_string):
    # get lengths to prevent index errors, reduce repetitive calculations
    lensub = len(sub_string)
    length = len(string) - lensub
    
    # go through string and find substring match
    matches = 0
    for elem in range(length+1):
        if string[elem:elem+lensub] == sub_string:
            matches += 1
    return matches

def mutate_string(string, position, character):
    # slice and join
    constring = string[:position] + character + string[position+1:]
    return constring

def aadlu(s):
    s = input()
    alnum = False
    alpha = False
    digit = False
    lower = False
    upper = False
    for elem in s:
        if elem.isalnum():
            alnum = True
        if elem.isalpha():
            alpha = True
        if elem.isdigit():
            digit = True
        if elem.islower():
            lower = True
        if elem.isupper():
            upper = True
    return(alnum, alpha, digit, lower, upper)

def wrap(string, max_width):
    wrapped_text_list = textwrap.wrap(string, max_width)
    return_string = ""
    for elem in wrapped_text_list:
        return_string += (elem + "\n")
    return return_string
