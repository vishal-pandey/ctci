"""
String Compression: Implement a method to perform basic string compression using the counts 
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the 
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).
"""

ip = input("Enter the string\n\n")
ip = list(ip)

def strCompress(ip):
	i=1
	rstr = ""
	for x in range(0, len(ip)):
		if x != 0:
			if ip[x] != ip[x-1]:
				if i!=1:
					rstr = rstr+ip[x-1]+str(i)
				else:
					rstr = rstr+ip[x-1]
				i=1
			else:
				i=i+1
	if i!=1:
		rstr = rstr+ip[len(ip)-1]+str(i)
	else:
		rstr = rstr+ip[len(ip)-1]
	return rstr

print(strCompress(ip))
