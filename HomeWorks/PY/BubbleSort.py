# Print Array
def PrintArray(AList, ListRange):
    for i in range(0,ListRange):
        print(AList[i], end=", ")
    print("End.")

# Get Array
def GetArray(AList, ListRange):
    for i in range(0,ListRange):
        AList[i] = float(input("bede : "))

# Bubble Sort
def BubbleSort(AList, ListRange):
    replaced = 1
    while(replaced!=0):
        replaced=0
        for i in range(0, ListRange-1):
            if(AList[i]>AList[i+1]):
                tmp = AList[i]
                AList[i] = AList[i+1]
                AList[i+1] = tmp
                replaced+=1

num = int(input("enter number of list : "))
MissedUpList = [0]*num  # baraye moshakhas shodan tedad index list

GetArray(MissedUpList, num)
BubbleSort(MissedUpList, num)
PrintArray(MissedUpList, num)
#MadMad_30