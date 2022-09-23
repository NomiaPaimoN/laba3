#include <iostream> 
#include <iomanip> 
#include <math.h>
using namespace std;
int main()
{
	double a, b, h, x, y, s, p;
	int n, i;
	cout << "Vvedite a,b,n,h" << endl;
	cin >> a >> b >> n >> h;
	x = a;
	do
	{
		p = s = 1;
		for (i = 1; i <= n; i++)
		{
			p *= 2*x / i;
			s += p;
		}
		y = exp(2*x);
		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		x += h;
	} while (x <= b + h / 2);
	cout << endl;
	return 0;
}
