num1 = int(input("pls enter number1 : "))
print("                   ---- =")
num2 = int(input("pls enter number2 : "))
ans = 0

if(num2 == 0):
    print("answer is undefined.")
elif(num1 == 0):
    print("Answer = 0")
elif(num1==num2):
    print("Answer = 1")
elif(num2==1):
    print("Answer = ", num1)
elif(num1>num2):
    while(num1>=0):
        num1-=num2
        ans+=1
    if((num1+num2)==0):
        print("Answer = ",ans-1, "\nRemaining = ", num1+num2)
    else:
        print("Answer ≈ ",ans-1, "\nRemaining = ", num1+num2)
elif(num2>num1):
    print("Answer < 1")
else:
    print("wtf are u doing??")
#MadMad_26