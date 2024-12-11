#include<iostream>
using namespace std;

int main()
{
    float n, x, PowAns=1, FactAns=1, FinalAns=1 , TmpAns=0;
    int i=1, j;
    cout<<"n : ";
    cin>>n;
    cout<<"x : ";
    cin>>x;
    while(i<=n)
    {
        j=1;
        PowAns=1;
        while(j<=i)
        {
            PowAns*=x;
            j++;
        }

        j=1;
        FactAns=1;
        while(j<=i)
        {
            FactAns*=j;
            j++;
        }

        TmpAns = PowAns/FactAns;
        FinalAns+=TmpAns;
        i++;
    }
    cout<<"\ne^x = "<<FinalAns<<"\n\n";

    return 0;
}
//MadMad_38
