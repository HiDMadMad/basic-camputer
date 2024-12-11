num = int(input("please enter a number : "))
print("\n1 is not prime")
i=2
IsPrime=True
while(i<=num):
    j=2
    IsPrime=True
    while(j<i):
        if(i%j==0):
            IsPrime=False
            break
        j+=1
    if(IsPrime==True):
        print(i,"is prime")
    else:
        print(i,"is not prime")
    i+=1
#MadMad_18