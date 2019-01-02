"""
One Away: There are three types of edits that can be performed on strings: insert a character, 
remove a character, or replace a character. Given two strings, write a function to check if they are 
one edit (or zero edits) away.
EXAMPLE
pale, ple -> true
pales, pale -> true 
pale, bale -> true 
pale, bake -> false
"""

ip1 = input("Enter String 1\n\n")
ip2 = input("Enter String 2\n\n")
ip1 = list(ip1)
ip2 = list(ip2)
print(ip1)
print(ip2)

def oneAway(ip1, ip2):
	i=0; j=0;
	counter = 0;
	strlen = len(ip1) if len(ip1) < len(ip1) else len(ip2)
	if abs(len(ip1)-len(ip2)) > 1:
		return False
	for x in range(0,strlen-1):
		if ip1[i] == ip2[j]:
			i=i+1;
			j=j+1;
		else:
			if ((ip1[i+1] == ip2[j]) and (counter == 0)):
				i=i+1
				counter=counter+1
			elif ((ip1[i] == ip2[j+1]) and (counter == 0)):
				j=j+1
				counter=counter+1
			elif ((ip1[i+1] == ip2[j+1]) and (counter == 0)):
				i=i+1
				j=j+1
				counter=counter+1
			else:
				return False
	return True

print(oneAway(ip1, ip2))
