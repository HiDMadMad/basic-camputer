#include<iostream>
using namespace std;

int main()
{
    int N,row,st;
    cout<<"Enter N: ";
    cin>>N;


    row = 0;
    while (row<N)
    {
        st = 0;
        while (st<N-row)
        {
            cout<<"*";
            st = st + 1;
        }
        cout<<"\n";
        row = row+1;
    }

    return 0;
}
