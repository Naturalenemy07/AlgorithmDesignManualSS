if __name__ == '__main__':
    n = int(input().strip())

    # use numerous if statements to reach conclusion
    if n%2 == 1 or (n > 5 and n <= 20):
        print("Weird")
    elif n <= 5 or n > 20:
        print("Not Weird")
