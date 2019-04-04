#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string word, line, line2;
	while (cin >> word)
	{
		line += word;
		line2 += word;
		line2 += ' ';
	}
	cout << line << endl;
	cout << line2 << endl;

	system( "pause" );
	return 0;
}
