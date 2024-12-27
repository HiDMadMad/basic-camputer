#include<iostream>
using namespace std;

/// for-for
void ForForInsertionSort(float AList[], int ListRange)
{
    int tmp=0;
    for(int i=0; i<ListRange; i++)
    {
        for(int j=i; j<ListRange; j++)
        {
            if(AList[i]>AList[j])
            {
                tmp = AList[i];
                AList[i] = AList[j];
                AList[j] = tmp;
            }
        }
    }
}

/// for-while
void ForWhileInsertionSort(float AList[], int ListRange)
{
    int tmp=0;
    for(int i=0; i<ListRange; i++)
    {
        int j=i;
        while(j<ListRange)
        {
            if(AList[i]>AList[j])
            {
                tmp = AList[i];
                AList[i] = AList[j];
                AList[j] = tmp;
            }
            j++;
        }
    }
}

/// while-for
void WhileForInsertionSort(float AList[], int ListRange)
{
    int tmp=0, i=0;
    while(i<ListRange)
    {
        for(int j=i; j<ListRange; j++)
        {
            if(AList[i]>AList[j])
            {
                tmp = AList[i];
                AList[i] = AList[j];
                AList[j] = tmp;
            }
        }
        i++;
    }
}

/// while-while
void WhileWhileInsertionSort(float AList[], int ListRange)
{
    int tmp=0, i=0;
    while(i<ListRange)
    {
        int j=i;
        while(j<ListRange)
        {
            if(AList[i]>AList[j])
            {
                tmp = AList[i];
                AList[i] = AList[j];
                AList[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

///Print Array
void PrintArray(float AList[], int ListRange)
{
    for(int i=0; i<ListRange; i++)
    {
        cout<<AList[i]<<", ";
    }
    cout<<"End.";
}

void GetArray(float AList[], int num)
{
    for(int i=0; i<num; i++)
    {
        cin>>AList[i];
    }
}

/// -----------------------------------------------------------

int main()
{
    int num;
    cout<<"Enter number of list : ";
    cin>>num;
    float MissedUpList[num];

    cout<<"\n\nfor-for : \n";
    GetArray(MissedUpList, num);
    ForForInsertionSort(MissedUpList, num);
    PrintArray(MissedUpList, num);

    cout<<"\n\nfor-while : \n";
    GetArray(MissedUpList, num);
    ForWhileInsertionSort(MissedUpList, num);
    PrintArray(MissedUpList, num);

    cout<<"\n\nwhile-for : \n";
    GetArray(MissedUpList, num);
    WhileForInsertionSort(MissedUpList, num);
    PrintArray(MissedUpList, num);

    cout<<"\n\nwhile-while : \n";
    GetArray(MissedUpList, num);
    WhileWhileInsertionSort(MissedUpList, num);
    PrintArray(MissedUpList, num);

    cout<<"\n\n";

    return 0;
}
//MadMad_133
