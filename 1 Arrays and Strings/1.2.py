""" Check Permutation: Given two strings,write a method to decide if one is a permutation of the
other. """

str1 = input("Enter String 1\n\n")
str2 = input("Enter String 2\n\n")

def checkPermut(str1, str2):
	if len(str1) != len(str2):
		return False

	st1 = list(str1)
	st2 = list(str2)

	st1.sort()
	st2.sort()

	if st1 != st2 :
		return False

	return True

print(checkPermut(str1, str2))