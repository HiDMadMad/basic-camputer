#include<iostream>
using namespace std;

int main()
{
    int N,counter;
    cout<< "Enter N: ";
    cin >> N;

    counter = 1;
    while (counter <= N)
    {
        //cout<<counter<<" "; // توضیح
        cout<<counter<<endl;
        counter = counter + 1;
    }

    return 0;
}
