#include<iostream>
using namespace std;

int main()
{
    /*
        index -> 0  1  2  3  4  5  6  7   8
        fibo  -> 0  1  1  2  3  5  8  13  21
    */
    int num, n, n1=1, n2=1, i=3;
    cout<<"please enter a number : ";
    cin>>num;

    if(num==1 || num==2)
    {
        cout<<"1";
    }
    else
    {
        cout<<"i : 1 -> "<<n1<<"\ni : 2 -> 0+1="<<n2<<"\n";
        while(i<=num)
        {
            n = n1+n2;
            cout<<"i : "<<i<<" -> "<<n1<<"+"<<n2<<"="<<n<<"\n";
            n1 = n2;
            n2 = n;
            i++;
        }
    }
    return 0;
}
//MadMad_32
