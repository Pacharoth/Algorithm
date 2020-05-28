#Fizz and buzz we must iterate the array and check if number is fizz
#then it can be divided by 3 and if it is buzz so we can divide by 5

#lets say we let an array
number=[1,2,5,15,3,6]

for i in range(0,len(number)):
	# so right here we start check the those number
	if number[i]%3 ==0:		#check if there is fizz number so print it
		print("{one} is Fizz".format(one=number[i]))
	elif number[i]%5 ==0:
		print("{} is buzz".format(number[i]))
		

