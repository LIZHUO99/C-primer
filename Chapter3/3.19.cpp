#include <iostream>
#include "Sales_item.h"
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
	vector<int> data(10);
	for (vector<int>::iterator iter = data.begin(); iter != data.end(); iter++)
	{
		cin >> *iter;
	}
	for (vector<int>::iterator iter = data.begin(); iter != data.end(); iter++)
	{
		*iter *= 2;
		cout << *iter << '\t';
	}
	cout << endl;
	for (vector<int>::const_iterator iter = data.begin(); iter != data.end(); iter++)
	{
		cout << *iter << '\t';
	}
	cout << endl;
	system( "pause" );
	return 0;
}
