"""
URLify : Write a method to replace all spaces in a string with '%20  
You may assume that the string has suf cient space at the end to hold the additional characters,
and that you are given the "true" length of the string. 
(Note: If implementing in Java,please use a character array so that you can perform this operation in place.)
EXAMPLE
Input: "Mr John Smith ", 13 
Output: "Mr%20John%20Smith"
"""

ip = input("Enter the string\n\n")
ip = ip.rstrip()

def urlify(ip):
	op = []
	for x in ip:
		if x == " ":
			op.append('%20')
		else :
			op.append(x)

	op = "".join(op)
	return op

print(urlify(ip))
