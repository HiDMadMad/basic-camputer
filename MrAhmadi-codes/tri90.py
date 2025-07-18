N = int(input('Enter N: '))

row = 0
while row < N:
    st = 0
    while st < row + 1:
        print('*',end = '')
        st = st + 1
    print('\n')
    row = row + 1