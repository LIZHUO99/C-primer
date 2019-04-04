#include <iostream>
#include "Sales_item.h"
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string string1,string2;
	cout << "Input two string:" << endl;
	cin >> string1 >> string2;

	if( string1 > string2 )
		cout << "string1 is larger" << endl;
	else if ( string1 == string2)
		cout << "string1 is equal to string2" << endl;
	else 
		cout << "string2 is larger" << endl;


	if( string1.length() > string2.length())
		cout << "string1 is longer" << endl;
	else if (string1.length() == string2.length())
		cout << "string1 is equal to string2" << endl;
	else
		cout << "string2 is longer" << endl;

	system( "pause" );
	return 0;
}
