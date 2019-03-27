#include <iostream>
#include <bitset>

using std::cin;
using std::cout;
using std::endl;
using std::bitset;

int main()
{
	bitset<32> b;
	for (int x = 1, y = 1; x <= 21;)
	{
		b.set (x);
		x += y;
		y = x - y;
	}
	cout << b.to_string() << endl;
	system( "pause" );
	return 0;
}
