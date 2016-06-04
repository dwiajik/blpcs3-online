#include<iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	if (number > 0)
	{
		cout << "positif" << endl;
	}
	else if (number < 0)
	{
		cout << "negatif" << endl;
	}
	else
	{
		cout << "nol" << endl;
	}
}
