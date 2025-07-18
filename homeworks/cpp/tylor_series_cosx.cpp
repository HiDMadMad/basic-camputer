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
		int sum=1;
		for(int i=0; i<pow; i++)
		{
			sum*=num;
		}
		return sum;
	}
}

float fact(int num)
{
	int sum=1;
	for(int i=1; i<=num; i++)
	{
		sum*=i;
	}
	return sum;
}

float CosTylor(int x, int n)
{
	int PlOrMi=-1, pow=2;
	float ans=1; // jomle 0 om
	for(int i=1; i<=n; i++)
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
	int x, n;
	cout<<"x : ";
	cin>>x;
	cout<<"n : ";
	cin>>n;
	cout<<"\nCos("<<x<<") = "<<CosTylor(x, n);

    return 0;
}
//MadMad_62
