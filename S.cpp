#include <iostream>

using namespace std;

int main()
{
	int row, column;
	cin >> row >> column;
	
	char BL[7][12] = {	"####..#....",
						"#...#.#....",
						"#...#.#....",
						"####..#....",
						"#...#.#....",
						"#...#.#....",
						"####..#####"};
	for (int r = 0; r < row; r++)
	{
		for (int z = 0; z < column * 11 + column + 1; z++)
		{
			cout << ".";
		}
		cout << endl;
		
		for (int i = 0; i < 7; i++)
		{
			cout << ".";
			for (int c = 0; c < column; c++)
			{
				for (int j = 0; j < 11; j++)
				{
					cout << BL[i][j];
				}
				cout << ".";
			}
			cout << endl;
		}
	}
	
	for (int z = 0; z < column * 11 + column + 1; z++)
	{
		cout << ".";
	}
	cout << endl;
		
		
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			cout << BL[i][j];
//		}
//		cout << endl;
//	}
}
