# get input for size of pattern
inp = input().split(' ')
hgt = int(inp[0])
wdt = int(inp[1])

# test wdt is 3x hgt
if wdt != 3*hgt:
    print("Width needs to be 3x the height.")

# print pattern
else:
    for h_elm in range(hgt):
        for w_elm in range(wdt):
            pass
