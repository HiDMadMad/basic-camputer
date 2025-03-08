#include<iostream>
using namespace std;

int main()
{

    int N,div,numOfDivs;
    cout<<"Enter num: ";
    cin>>N;

    numOfDivs = 0;
    div = 1;

    while(div <= N)
    {
        if (N%div == 0)
        {
            cout<<div<<"\t";
            numOfDivs++;
        }
        div++;
    }

    cout<<"\nnumOfDivs= "<<numOfDivs;
    return 0;
}
