#include<iostream>
#include<string>
using namespace std;

int main()
{
/*         +--> مقدار باید میداشت ولی تاثیری توی محاسبه نداره
           |
           |                 +-> تعداد اعداد وارد شده توسط کاربر
           |                 |*/
    float num = 11, sum = 0, i = 0;
    cout<<"Finaly enter 0 to do the sum.\n";
    while(num != 0) // تا زمانی که کابر 0 رو وارد نکرده
    {
        cout<<"please enter a number : ";
        cin>>num;
        /*
        if(num < 0) // اگه عدد منفی هم وارد کنه دیگه نمیشماره
        {
            cout<<"to continue number must be bigger than 0"<<endl; // پیام ارور بهش میده و بعد محاسبه انجام میشه
            i++;
            break;
        }
        */
        sum+=num;
        i++;
    }

/*                                                                                               +--> برای اینکه صفر اخر رو حساب نکنه
                                                                                                 |*/
    cout<<"End."<<endl<<endl<<"Sum of numbers is : "<<sum<<endl<<"Mean of numbers is : "<<sum/(i-1)<<endl;
    return 0;
}
//MadMad_34