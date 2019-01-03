"""
String Rotation : Assume you have a mehod isSubString which checks if one word is a substring of the other,
Given two strings, s1, s2, write a code to check if s2 is a rotation of s1 using only 1 call to isSubstring
(eg, "waterbottle" is a rotation of "erbottlewat")
"""

s1 = input("Enter the string 1 \n\n")
s2 = input("Enter the string 2 \n\n")

def isSubString(s1, s2):
	if (s1 in s2) or (s2 in s1):
		return True
	else:
		return False

def rotationCheck(s1, s2):
	s1 = s1+s1
	return isSubString(s1,s2)

print(rotationCheck(s1,s2))

# Logic : if s2 is a rotation of s1 then s2 is always is a substring of s1+s1
