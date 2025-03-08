#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int lastFib = 1;
    int preLastFib = 0;
    int nextFib;
    int counter = 2;
    if (N==1)
        cout<<preLastFib;
    else if (N==2)
        cout<<preLastFib<<"\t"<<lastFib<<"\t";
    else{
        cout<<preLastFib<<"\t"<<lastFib<<"\t";
        while (counter < N)
        {
            nextFib = preLastFib + lastFib;
            counter++;
            preLastFib = lastFib;
            lastFib = nextFib;
            cout<<nextFib<<"\t";
        }
    }
    //cout<<nextFib;
    return 0;
}

