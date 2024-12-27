#include<iostream>
using namespace std;

int IsFibo(int num)
{
    int n1=0, n2=1, n=0, FiboCounter=2;
    if(num==0)
        return 0;
    else if(num==1)
        return 1;
    else
    {
        while(FiboCounter<=num)
        {
            n = n1+n2;
            n1 = n2;
            n2 = n;
            FiboCounter++;
        }
        return n;
    }
}

bool IsPrime(int num)
{
    if(num==1)
        return false;
    else if(num==2)
        return true;

    int i=2, PrimeCounter=0;
    bool isprime = true;
    while(i<num)
    {
        if(num%i == 0)
        {
            isprime=false;
            break;
            //PrimeCounter++;
        }
        i++;
    }

    if(isprime == true) //PrimeCounter==0
        return true;
    else
        return false;
}

//---------------------------------------

int main()
{
    int num, i=1, Counted=0;
    cout<<"Enter number of series : ", cin>>num;

    while(IsFibo(i)<=num)
    {
        if(IsPrime(IsFibo(i)))
            cout<<IsFibo(i)<<"\t";
        Counted++;
        i++;
    }
    cout<<"\n\nCounted : "<<Counted+1;  // +1 chon 0 ham hast.
    return 0;
}
//MadMad_67
