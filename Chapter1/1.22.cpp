#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
int main()
{
	Sales_item trans1, trans2;
	cout << "Enter transactions:" << endl;
	cin >> trans1 >> trans2;
	if( trans1.same_isbn(trans2) )
	{
		cout << "IBSN, number of copies saled, total revenue, and average price are:" << endl;
		cout << trans1 + trans2 << endl;
	}
	else 
		cout << "The two transactions' IBSN is different." << endl;
	system( "pause" );
	return 0;
}
