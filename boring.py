# List initialization
t=int(input())
for i in range(0,t):
    n1=int(input())
    n2=int(input()) 
    for x in range(n1,n2,1):

# Using map 
        input=str(x)
        output = list(map(int, str(input[0]))) 
# Printing output 
        print(output) 
        for i in range(0,len(output)):
            print(output[i])

    
        
