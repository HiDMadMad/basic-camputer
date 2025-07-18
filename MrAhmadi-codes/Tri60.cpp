#include<iostream>
using namespace std;

int main()
{
    int N,r,sp,nSt;
    cout<<"Enter N: ";
    cin>>N;

    r = 1;
    while (r <= N)
    {
        sp = 0;
        while (sp < N-r)
        {
            cout<<" ";
            sp = sp + 1;
        }
        nSt = 0;
        while(nSt < 2*r - 1)
        {
            cout<<"*";
            nSt = nSt + 1;
        }
        cout<<"\n";
        r = r + 1;
    }



    return 0;
}
