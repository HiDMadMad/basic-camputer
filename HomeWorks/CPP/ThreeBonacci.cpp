#include<iostream>
using namespace std;

int N_Omin(int num)
{
    if(num==0)
        return 0;
    else if(num==1 || num==2)
        return 1;

    else
    {
        int fib1=0, fib2=1, fib3=1, LiveFib;
        for(int i=3; i<=num; i++)
        {
            LiveFib = fib1 + fib2+ fib3;
            fib1 = fib2;
            fib2 = fib3;
            fib3 = LiveFib;
        }

        return LiveFib;
    }
}

void N_Ta(int num)
{
    cout<<"0, 1, 1";
    int fib1=0, fib2=1, fib3=1, LiveFib;
    for(int i=3; i<=num; i++)
    {
        LiveFib = fib1 + fib2+ fib3;
        fib1 = fib2;
        fib2 = fib3;
        fib3 = LiveFib;
        cout<<", "<<LiveFib;
    }
}

int main()
{
    /*
        index -> 0  1  2  3  4  5  6   7   8
        fibo  -> 0  1  1  2  4  7  13  24  44
    */

    int n;
    cout<<"INDEXs STARTs FROM 0\n\nN omin : ";
    cin>>n;
    cout<<N_Omin(n)<<"\n\nN ta : ";
    cin>>n;
    N_Ta(n);

    return 0;
}
//MadMad_56
