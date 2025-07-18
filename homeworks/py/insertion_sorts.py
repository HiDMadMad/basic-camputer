# for-for
def ForForInsertionSort(AList, ListRange):
    tmp=0
    for i in range(0,ListRange):
        for j in range(i,ListRange):
            if(AList[i]>AList[j]):
                tmp = AList[i]
                AList[i] = AList[j]
                AList[j] = tmp

# for-while
def ForWhileInsertionSort(AList, ListRange):
    tmp=0
    for i in range(0,ListRange):
        j=i
        while(j<ListRange):
            if(AList[i]>AList[j]):
                tmp = AList[i]
                AList[i] = AList[j]
                AList[j] = tmp
            j+=1

# while-for
def WhileForInsertionSort(AList, ListRange):
    tmp=0
    i=0
    while(i<ListRange):
        for j in range(i,ListRange):
            if(AList[i]>AList[j]):
                tmp = AList[i]
                AList[i] = AList[j]
                AList[j] = tmp
        i+=1

# while-while
def WhileWhileInsertionSort(AList, ListRange):
    tmp=0
    i=0
    while(i<ListRange):
        j=i
        while(j<ListRange):
            if(AList[i]>AList[j]):
                tmp = AList[i]
                AList[i] = AList[j]
                AList[j] = tmp
            j+=1
        i+=1

# Print Array
def PrintArray(AList, ListRange):
    for i in range(0,ListRange):
        print(AList[i], end=", ")
    print("End.")

# Get Array
def GetArray(AList, ListRange):
    for i in range(0,num):
        AList[i] = float(input("bede : "))



num = int(input("enter number of list : "))
MissedUpList = [0]*num  # baraye moshakhas shodan tedad index list

print("\nfor-for :")
GetArray(MissedUpList, num)
ForForInsertionSort(MissedUpList, num)
PrintArray(MissedUpList, num)
print("\n")

print("\nWhile-for :")
GetArray(MissedUpList, num)
WhileForInsertionSort(MissedUpList, num)
PrintArray(MissedUpList, num)
print("\n")

print("\nfor-While :")
GetArray(MissedUpList, num)
ForWhileInsertionSort(MissedUpList, num)
PrintArray(MissedUpList, num)
print("\n")

print("\nWhile-While :")
GetArray(MissedUpList, num)
WhileWhileInsertionSort(MissedUpList, num)
PrintArray(MissedUpList, num)
print("\n")
#MadMad_88