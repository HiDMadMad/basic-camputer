#include <iostream>
using namespace std;

int SumOfAges(int age1, int age2)
{
    return age1+age2;
}

int main()
{
    int Age1, Age2;

    cout<<"please enter the age of first person : "; // +--> get first age
    cin>>Age1;                                       // |
  //----------------------------------------------------+

    cout<<"please enter the age of second person : ";// +--> get second age
    cin>>Age2;                                       // |
  //----------------------------------------------------+

    cout<<endl<<"sum of ages is : "<<SumOfAges(Age1, Age2)<<endl; // +--> print sum of ages
  //-----------------------------------------------------------------+

    return 0;
}
