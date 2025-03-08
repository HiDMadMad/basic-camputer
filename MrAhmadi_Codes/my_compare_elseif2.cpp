#include<iostream>
using namespace std;

int main()
{

    int age1, age2,harchi = 0;

    cout<<"Enter age1: ";
    cin>> age1;

    cout<<"Enter age2: ";
    cin>> age2;

    if (age1 > age2)
    {
        cout<<"The first is older";
    }
    else if (age1==age2)
    {
            cout<< "The same age!";
            harchi = 1;
    }
    else
    {
            cout<<"The second is older";
    }

    return 0;
}
