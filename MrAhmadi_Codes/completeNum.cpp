#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int div=1,sumDivs = 0;

    while (div<N)
    {
        if (N%div == 0)
        {
            sumDivs += div;
        }
        div++;
    }
    if (sumDivs == N)
        cout<<N<<" is complete";
    else
        cout<<N<<" is not complete";

    return 0;
}
