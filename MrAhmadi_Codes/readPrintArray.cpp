#include<iostream>
using namespace std;

int main()
{
    int i,N=5;
    float X;
    float harchi[N];

    i=0;
    while(i<N)
    {
        cin>>X;
        harchi[i] = X;
        //cout<<"add ine: "<<harchi[i]<<endl;
        i++;
    }

    i=0;
    while (i<N)
        cout<<harchi[i++]<<"\t";

    return 0;
}
