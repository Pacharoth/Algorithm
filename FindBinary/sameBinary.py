def bSearch(L,n):
    a = 0 #we define the first Element
    b = n-1 #size -1 count from 0
    while True:         #infinite loops
        h = (a+b)//2     #using the index of the array/2 aas integer
        if L[h] == 0:   #check if it is equal the item 0
            return h
        elif L[h]>0:
            b = h           #set high to mid
        elif L[h]<0:      #checking that value low so set lowset low to that mid
            a = h
