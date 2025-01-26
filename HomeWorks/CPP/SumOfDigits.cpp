#include<iostream>
using namespace std;

int main()
{
    int num, ModOp, NumCp, sum=0, counter=1;
    cout<<"enter a number: ";
    cin>>num;
    NumCp=num;

    while(NumCp!=0)
    {
        cout<<"\nNum in step "<<counter<<" : "<<NumCp<<endl;
        ModOp=NumCp%10;  /// Last Digit
        sum+=ModOp; /// Answer
        NumCp = (NumCp-ModOp)/10;  /// Delete last digit
        counter++;
    }
    cout<<"\n\n\nSum Of Digits in "<<num<<" = "<<sum<<"\n\n";

    return 0;
}
//MadMad_23
