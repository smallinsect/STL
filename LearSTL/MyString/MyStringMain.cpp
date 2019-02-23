#include <string>
#include <vector>
#include <iostream>

#include "MyString.h"

using namespace std;



int main(int argv, char **argc){
	//string str;
	//const char *cstr = str.c_str();

	//MyString mstr;
	//const char *cstr1 = mstr.c_str();
	
	//string str(5, 'a');
	//cout << str << endl;

	//MyString mstr(6, 'c');
	//cout << mstr.c_str() << endl;

	//string str("abcdefg");
	//cout << str << endl;

	//MyString mstr("aabbccee");
	//cout << mstr.c_str() << endl;

	//string str("abcdef", 3);
	//cout << str << endl;

	//MyString mstr("abcdef", 4);
	//cout << mstr.c_str() << endl;

	//string str("abcdef");
	//string str1(str, 2, 3);
	//cout << str1 << endl;

	//MyString mstr("0123456");
	//MyString mstr1(mstr, 3, 2);
	//cout << mstr1.c_str() << endl;

	//string str("abcdef");
	//string str1(str);
	//cout << str1 << endl;

	//MyString mstr("0123456789");
	//MyString mstr1(mstr);
	//cout << mstr1.c_str() << endl;
	//cout << mstr1 << endl;

	//cin >> mstr1;
	//cout << mstr1;

	string str("abcdef");
	cout << str[0] << endl;
	
	try
	{
		cout << str.at(10) << endl;
	}
	catch(out_of_range &a)
	{
		cout << "方怏埆順" << endl;
	}
	string str1 = "最最最";
	cout << str1 << endl;
	cin >> str1;
	
	cout << str1 << endl;
	printf("込込込");
	return 0;
}