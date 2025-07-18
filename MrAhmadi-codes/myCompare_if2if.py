age1 = int(input('Enter age 1: '))
age2 = int(input('Enter age 2: '))

if age1 > age2:
    print('The first is older')
else:
    if age1 == age2:
        print('The same age!')
    else:
        print('The second is older')