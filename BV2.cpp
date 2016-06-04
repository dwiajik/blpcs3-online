#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	string hasil[t];
	
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		
		if (n % 2 == 0)
		{
			hasil[i] = "Kung";
		}
		else
		{
			hasil[i] = "Kang";
		}
	}
	
	for (int i = 0; i < t; i++)
	{
		cout << hasil[i] << endl;
	}
}
