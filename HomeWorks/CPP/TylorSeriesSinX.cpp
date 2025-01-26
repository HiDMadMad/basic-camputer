#include<iostream>
using namespace std;

float power(int num, int pow)
{
	if(num==0)
	{
		return 0;
	}
	else if(pow==0)
	{
		return 1;
	}
	else
	{
		int NumCp = num;
		for(int i=1; i<pow; i++)
		{
			num*=NumCp;
		}
		return num;
	}
}

float fact(int num)
{
	int sum=1, i;
	for(i=num; i>=1; i--)
	{
		sum*=i;
	}
	return sum;
}

float SinTylor(int x, int Nums)
{
	int PlOrMi=-1, pow=3;
	float ans=x; // jomle 0 om
	for(int i=1; i<=Nums; i++)
	{
		if(PlOrMi == 1)
			ans += (power(x, pow)/fact(pow));
		else
			ans -= (power(x, pow)/fact(pow));
		pow+=2;
		PlOrMi *= -1;
	}
	return ans;
}

int main()
{
    int x, N;
    cout<<"x : ";
    cin>>x;
    cout<<"N : ";
    cin>>N;
	cout<<"\nSin("<<x<<") = "<<SinTylor(x, N);

    return 0;
}
//MadMad_62
