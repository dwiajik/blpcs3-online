#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double pi = 3.14159265359;
	int n;
	cin >> n;
	double value[n];
	for (int a = 0; a < n; a++)
	{
		double R, H;
		cin >> R >> H;
		
		double S = sqrt(R * R + H * H);
		double Ltot = 2 * pi * R * S;
		double Vtot = (pi * R * R * H) / 3;
		
		double top = cbrt((3 * H * H * Ltot) / (pi * R * R));
		double bottom = 0;
		double h = (top - bottom) / 2;
		
		double Vcat = (pi * h * h * h * R * R) / (3 * H * H);
		double Lcat = (pi * h * h * R * S) / (H * H);
		
		while (Ltot - (Vcat + Lcat) >= 0.0000001 || Ltot - (Vcat + Lcat) <= -0.0000001)
		{
			if (Ltot - (Vcat + Lcat) > 0)
			{
				bottom = h;
			}
			else if (Ltot - (Vcat + Lcat) < 0)
			{
				top = h;
			}
			
			h = ((top - bottom) / 2) + bottom;
		
			Vcat = (pi * h * h * h * R * R) / (3 * H * H);
			Lcat = (pi * h * h * R * S) / (H * H);
		}
		
		if (h < H)
		{
			value[a] = h;
		}
		else
		{
			value[a] = H;
		}
	
	
	}
	
	for (int b = 0; b < n; b++)
	{
		cout << fixed << setprecision(6) << value[b] << endl;
	}
}
