#include <iostream>
#include <vector>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector <int> vect;
	int veci;
	cout << "Input data" << endl;
	while (cin >> veci)
	{
		vect.push_back(veci);
	}
  
	for (vector<int>::size_type i = 0; i < vect.size() - 1; i+= 2)
	{
		if (i % 8 == 0)
		{
			cout << endl;
		}
		cout << vect[i] + vect[i+1] << "\t";
	}
	cout << endl;
	if (vect.size() % 2 != 0)
		cout << "The last element is not been summed." << endl;

	for (vector<int>::size_type frist = 0, last = vect.size() - 1; frist < last; frist++, last--)
	{
		if (frist % 4 == 0)
		{
			cout << endl;
		}
		cout << vect[frist] + vect[last] << '\t' ;
	}
	if (vect.size() % 2 != 0)
		cout << "The center element is not been summed." << endl;
    
	system( "pause" );
	return 0;
}
