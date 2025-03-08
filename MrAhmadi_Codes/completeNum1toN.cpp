#include<iostream>
using namespace std;

int main()
{
    int N,sumDivs;
    cin>>N;

    int div=1;
    int i=1;
    while (i<=N)
    {
        div = 1;
        sumDivs = 0;

        while (div<i)
        {
            if (i%div == 0)
            {
                sumDivs += div;
            }
            div++;
        }
        if (sumDivs == i)
            cout<<i<<"\t";

        i++;
    }

    return 0;
}
