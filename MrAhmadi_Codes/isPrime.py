N = int(input("Enter your number: "))

div = 1
numOfDivs = 0

while div <= N:
    if N%div == 0:
        numOfDivs += 1
    div+=1

if numOfDivs == 2:
    print(N,"is Prime")
else:
    print(N,"is not Prime")