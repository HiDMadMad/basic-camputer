import time

num = 11  # مقدارش تاثیری نداره ولی چون باید تعریف بشه مقدار دادم
sum = 0
i = 0     # تعداد اعدادی که کاربر وارد کرده برای محاسبه میانگین

while(num!=0):
    num = float(input("enter a number : "))
    sum+=num
    i+=1
print("Loading... =)))")
time.sleep(1) # کرم.
#                                                                      +--> منهای یک کردم که صفر اخر رو حساب نکنه  
#                                                                      |
print("\nSum of numbers is : ", sum, "\nMean of numbers is : ", sum/(i-1), "\n\n")