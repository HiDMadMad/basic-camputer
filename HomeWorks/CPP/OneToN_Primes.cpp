#include<iostream>
using namespace std;

int main()
{
    int num, i=2, j, PrimeNum=0;
    bool IsPrime;
    cout<<"please enter a number : ";
    cin>>num;
    cout<<"\n1 is not prime\n";
    while(i<=num)
    {
        j=2;
        PrimeNum=0;
        IsPrime=true;
        while(j<i)
        {
            if(i%j == 0)
            {
                IsPrime=false;
                break;
            }
            j++;
        }

        if(IsPrime==true)
            cout<<i<<" is prime\n";
        else
            cout<<i<<" is not prime\n";
        i++;
    }

    return 0;
}
//MadMad_35
