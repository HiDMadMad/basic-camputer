#include<iostream>
using namespace std;

bool IsPrime(int num)
{
    bool isprime;
    if(num<=1)
        return false;
    else if(num==2)
        return true;
    else
    {
        isprime = true;
        for(int i=3s; i<num; i++)
        {
            if(num%i==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime)
            return true;
        else
            return false;
    }
}

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;

    int PowCnt;
    int i=2;
    while(num!=1)
    {
        PowCnt=0;
        if(IsPrime(i))
        {
            if(num%i==0)
            {
                while(num%i==0)
                {
                    num = (num/i);
                    PowCnt++;
                }
                cout<<i<<"^"<<PowCnt<<" * ";
            }
        }

        i++;
    }
    cout<<"1\n\n";

    return 0;
}
//MadMad_59
