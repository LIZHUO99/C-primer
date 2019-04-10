#include <iostream>
#include <stdexcept>
istream &f(istream &is)
{
	int ival;
	while (is >> ival, !is.eof())
	{
		if (is.bad())
		{
			throw std::runtime_error("IO stream corrupted");
		}
		if (is.fail())
		{
			is.clear();
			is.ignore(233, '\n');
			continue;
		}
		cout << ival << endl;
	}
	is.clear();
	return is;
}
