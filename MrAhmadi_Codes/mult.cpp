#include<iostream>

using namespace std;

int main()
{
    int X,Y, res = 0, cnt = 0;

    cout<<"Enter X and Y: "<<endl;
    cin>>X;
    cin>>Y;

    while (cnt < X)
    {
        res = res + Y;
        cnt = cnt + 1;
    }

    cout<<"X * Y = "<<res;
    //cout<<X<<"*"<<Y<<"="<<res;

    return 0;
}
