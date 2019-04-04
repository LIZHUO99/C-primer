#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<string> text;
	string word;
	while (cin >> word)
	{
		text.push_back(word);
	}
	for (vector<string>::size_type i = 0; i < text.size(); i++)
	{
		for (string::size_type j = 0; j < text[i].length(); j++)
		{
			text[i][j] = toupper (text[i][j]);
		}
	}
	for (vector<string>::size_type i = 0; i < text.size(); i++)
	{
		if (i % 8 == 0)
			cout << endl;
		cout << text[i] << '\t';
	}
	system( "pause" );
	return 0;
}
