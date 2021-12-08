# Two kangaroos with starting position x1 and x2 hop along a number line at a velocity of v1 and v2 (starting at minimum 0).  
# This function will determine if the two kangaroos will ever hop on the same spot on the number line at the same time.

def kangaroo(x1, v1, x2, v2):
    # first check to make sure v1 and v2 aren't equal (will divide by zero)
    if v1 == v2:
        if x1 == x2:
            return("YES")
        else:
            return("NO")
    
    # Set the two linear equations equal to each other and solve for intersection
    intersect = (x2-x1)/(v1-v2)
    
    # if negative, that means it intersects prior to starting points
    if intersect <= 0:
        return("NO")
    
    # If divisible by 1, that means it intersects at a jump
    elif intersect % 1 == 0:
        return("YES")
    
    # Anything else (such as fractions) means it never intersects at a jump
    else:
        return("NO")
