num = int(input("please enter number : "))
power = int(input("please enter power : "))
ans=1

if( (power == 0) or (num == 1)):
    print("answer = 1")
elif(power == 1):
    print("answer = ", num)
else:
    while(power>0):
        i_ans = ans
        sum=0
        while(i_ans>0):
            sum+=num
            i_ans-=1
        ans=sum
        power-=1
    print("answer = ", ans)
#MadMad_19