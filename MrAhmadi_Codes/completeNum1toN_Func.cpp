#include<iostream>
using namespace std;

int isComplete(int n)
{
    int div = 1;
    int sum = 0;
    while (div<n)
    {
        if (n%div == 0)
        {
            sum += div;
        }
        div++;
    }
    if (sum==n)
        return true;
    else
        return false;
}

int main()
{
    int N,i=1;
    cin>>N;
    int javab = 0 ;

    while (i<=N)
    {
        javab = isComplete(i);
        if (javab==true)
            //(isComplete(i)==true)
        {
            cout<<i<<"\t";
        }
        i++;
    }
    return 0;
}
