#include<iostream>
using namespace std;

void printArray(float arr[], int s)
{
    int j;
    for (j=0;j<s;j++)
        cout<<arr[j]<<"\t";
    cout<<endl;
    return;
}


int main()
{
    int i,j,N=5;
    float X;
    float harchi[N];

    for (i=0; i<N ; i++)
    {
        cin>>X;
        harchi[i] = X;
    }

    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
            if(harchi[i]>harchi[j])
            {
                X = harchi[i];
                harchi[i] = harchi[j];
                harchi[j] = X;
            }
        }
    }


    printArray(harchi,N);
    //printArray(harchi,N);
    /*
    i=0;
    while(i<N)
    {
        cin>>X;
        harchi[i] = X;
        //cout<<"add ine: "<<harchi[i]<<endl;
        i++;
    }*/

    /*
    i=0;
    while (i<N)
        cout<<harchi[i++]<<"\t";
    */
    return 0;
}
