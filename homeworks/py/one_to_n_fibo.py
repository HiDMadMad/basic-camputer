num = int(input("please enter a number : "))
n=0 
n1=1
n2=1 
i=3
if(num==1 or num==2):
    print("1")
else:
    print("i : 1  ->",n1,"\ni : 2  -> 0 + 1 =",n2)
    while(i<=num):
        n = n1+n2
        print("i :",i," ->",n1,"+",n2,"=",n)
        n1 = n2
        n2 = n
        i+=1
#MadMad_16