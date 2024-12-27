#include<iostream>
using namespace std;

void PrintArray(float AList[], int ListRange)
{
    for(int i=0; i<ListRange; i++)
    {
        cout<<AList[i]<<", ";
    }
    cout<<"End.";
}

void GetArray(float AList[], int ListRange)
{
    for(int i=0; i<ListRange; i++)
    {
        cin>>AList[i];
    }
}

void BubbleSort(float AList[], int ListRange)
{
    int Replaced=1, i, tmp;
    while(Replaced!=0)
    {
        Replaced=0;
        for(i=0; i<(ListRange-1); i++)
        {
            if(AList[i]>AList[i+1])
            {
                tmp = AList[i];
                AList[i] = AList[i+1];
                AList[i+1] = tmp;
                Replaced++;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"ender number of list : ";
    cin>>n;
    float MissedUpArrey[n];
    GetArray(MissedUpArrey, n);
    BubbleSort(MissedUpArrey, n);
    PrintArray(MissedUpArrey, n);

    return 0;
}
//MadMad_52
