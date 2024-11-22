#include<iostream>
using namespace std;

int main()
{
    int num, power, ans=1;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter power : ";
    cin>>power;

    if( (power == 0) || (num == 1))
    {
        cout<<"\nD-Bug : power==0\n\n";
        cout<<"Answer = 1\n\n";
    }
    else if(power == 1)
    {
        cout<<"\nD-Bug : power==1\n\n";
        cout<<"Answer = "<<num<<"\n\n";
    }
    else
    {
        cout<<"\nD-Bug : ";
        while(power>0)
        {
            cout<<"\n  num : "<<num<<"\n  power : "<<power<<"\n  ans : "<<ans<<endl;
            int i_ans = ans;
            int sum = 0;
            while(i_ans>0)
            {
                sum += num;
                i_ans--;
            }
            ans=sum;
            power--;
        }
        cout<<"\n  num : "<<num<<"\n  power : "<<power<<"\n  ans : "<<ans<<"\nD-Bug."<<endl;
        cout<<"\n\nAnswer = "<<ans<<endl;
    }
    return 0;
}
//MadMad_43