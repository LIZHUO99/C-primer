#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
int main()
{
	Sales_item trans,total;
	cout << "Enter transactions:" << endl;
	cin >> total;
	while (cin >> trans)
	{
		if( trans.same_isbn(total) )
		{
			total = total + trans;
		}
		else 
		{
			cout << "The transactions' IBSN is different." << endl;
			break;
		}
	}
	cout << total << endl;
	system( "pause" );
	return 0;
}
