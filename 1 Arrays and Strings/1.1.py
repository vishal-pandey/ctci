""" QUESTION - Is Unique: Implement an algorithm to determine if a string has all unique characters. 
What if you cannot use additional data structures? """

ip = input("Enter a string to check \n")

def checkUnq(ip):
    check=[]
    for x in ip:
        if x not in check:
            check.append(x)
        else:
            return False
    return True

print(checkUnq(ip))
