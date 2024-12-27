def IsFibo(num):
    n1=0
    n2=1
    n=0
    i=2
    if(num==0):
        return 0
    elif(num==1):
        return 1
    else:
        while(i<=num):
            n=n1+n2
            n1=n2
            n2=n
            i+=1
        return n

def IsPrime(num):
    if(num==1):
        return False
    elif(num==2):
        return True
    else:
        i=2
        isprime = True
        while(i<num):
            if(num%i==0):
                isprime=False
                break
            i+=1
        
        if(isprime==True):
            return True
        else:
            return False

i=1
num = int(input("enter number of series : "))
while(IsFibo(i)<=num):
    if(IsPrime(IsFibo(i))):
        print(IsFibo(i))
    i+=1
#MadMad_43