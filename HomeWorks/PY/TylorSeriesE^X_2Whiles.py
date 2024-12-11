n = int(input("n : "))
x = int(input("x : "))
i = 1
FinalAns=1
TmpAns=0
while(i<=n):
    j=1
    PowAns=1
    FactAns=1
    while(j<=i):
        PowAns*=x
        FactAns*=j
        j+=1
    i+=1
    FinalAns += PowAns/FactAns
print("\ne^x = ", FinalAns, "\n\n")
#MadMad_17