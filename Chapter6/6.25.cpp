#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string curWord, preWord;
	cout << "Enter some words:(Ctrl + Z to stop):";
	while (cin >> curWord) {
#ifndef NDEBUG
		cout << curWord << endl;
#endif
		if (!isupper(curWord[0])) {
			continue;
		}
		if (curWord != preWord) {
			preWord = curWord;
		}
		else
			break;
	}
	if (curWord == preWord && !curWord.empty()) {
		cout << "The repeated word is :" << curWord << endl;
	}
	else
		cout << "There is no repeated wrod." << endl;
	system( "pause" );
	return 0;
}
