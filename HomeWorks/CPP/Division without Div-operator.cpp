#include<iostream>
using namespace std;
int main()
{
    int num1, num2, ans=0;
    cout<<"pls enter number1 : ";
    cin>>num1;
    cout<<"                   --- ="<<endl;
    cout<<"pls enter number2 : ";
    cin>>num2;
    if(num2 == 0)
    {
        cout<<endl<<"D-Bug : num2 == 0"<<endl;
        cout<<"answer is undefined."<<endl;
    }

    else if(num1 == 0)
    {
        cout<<endl<<"D-Bug : num1 == 0"<<endl;
        cout<<"Answer = 0"<<endl;
    }

    else if(num1 == num2)
    {
        cout<<endl<<"D-Bug : num1 == num2"<<endl;
        cout<<"Answer = 1"<<endl;
    }

    else if(num2 == 1)
    {
        cout<<endl<<"D-Bug : num2 == 1"<<endl;
        cout<<"Answer = "<<num1<<endl;
    }

    else if(num1>num2)
    {
        cout<<endl<<"D-Bug : num1 > num2"<<endl;
        while(num1>=0)
        {
            num1-=num2;
            ans++;
        }
        if((num1+num2)==0) // یعنی باقی مانده 0 شده
        {
            cout<<"Answer = "<<ans-1<<endl<<"Remaining = "<<num1+num2;;
        }
        else
        {
            cout<<"Answer ≈ "<<ans-1<<endl<<"Remaining = "<<num1+num2;
            /*                                   |
										  +--> باقی مانده  */
        }

    }

    else if(num2>num1)
    {
        cout<<endl<<"D-Bug : num1 < num2"<<endl;
        cout<<"Answer < 1   =) "<<endl;
    }
	
	else
	{
		cout<<"wtf are u doing??";
	}
}
//MadMad_67