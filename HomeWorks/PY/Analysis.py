def IsPrime(num):
    if(num<=1):
        return False
    elif(num==2):
        return True
    else:
        i=2
        prime = True
        while(i<num):
            if(num%i==0):
                prime = False
                break
            i+=1
        if(prime):
            return True
        else:
            return False


num = int(input("n : "))
i=2
while(num!=1):
    PowCnt = 0
    if(IsPrime(i)):
        if(num%i==0):
            while(num%i==0):
                num/=i
                PowCnt+=1
            print(i,"^",PowCnt," * ",end=" ")    
    i+=1
print(1)
#MadMad_32