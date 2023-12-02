#include <fstream>
using namespace std;
int main()
{
	ifstream f("case1.in");
	int n;
	f >> n;
	int gr1=0, gr2=0, gr3=0, b=0, ff=0, c=0;
	while (n > 0)
	{
		int x;
		f >> x;
		switch (x/1000)
		{
			case 1: gr1++; break;
			case 2: gr2++; break;
			case 3: gr3++; break;
		}
		b += x/100%10;
		ff += x/10%10;
		c += x%10;
		n--;
	}
	f.close();
	ofstream g("case1.out");
	g << gr1 << '\n' << gr2 << '\n' << gr3 << '\n';
	g << b << '\n' << ff << '\n' << c;
	g.close();
	return 0;
}

