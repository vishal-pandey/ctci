"""
Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and 
column are set to 0.
"""
arr = [[11,12,13],[21,22,23],[31,0,33]]

zeros = []

for x in range(0,len(arr)):
	for y in range(0,len(arr[x])):
		if arr[x][y] == 0:
			zeros.append([x,y])

for x in zeros:	
	for xi in range(0,len(arr)):
		arr[xi][x[1]] = 0
	for yi in range(0,len(arr[x[0]])):
		arr[x[0]][yi] = 0

print(arr)
