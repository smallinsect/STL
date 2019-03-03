#include <string>
#include <vector>
#include <iostream>

#include <time.h>
#include <stdlib.h>

#include "MyString.h"

using namespace std;

char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int letter_num = 26 + 26;
int random_num = 50;

void Random(){
	//当前系统时间作为随机种子
	srand((unsigned int)time(NULL));

	for (int i = 0; i < random_num; ++i){
		char ch = letter[rand() % letter_num];
		printf("%c", ch);
	}
}

//string迭代器 迭代器失效
void FunIterator(){
	string str("VZmhGHuAVmOFtUsCbEDIlVTmgZzfTwFiKWayLPPmTdXKgLKvms");
	string::iterator ite;

	cout << str << endl;

	//ite = str.begin();
	//for (int i = 0; i < str.size(); ++i){
	//	cout << *ite << " ";
	//	++ite;
	//}

	//for (int i = 0; i < str.size(); ++i){
	//	cout << ite[i] << " ";
	//}

	//for (ite = str.begin(); ite != str.end(); ++ite){
	//	cout << *ite << " ";
	//}

	ite = str.begin();
	str.append("1", 100);

	ite[0] = 'a';
	
	puts("");
}

//string通过跌迭代器 使用append erase insert
void TestIterator(){
	string str("VZmhGHuAVmOFtUsCbEDIlVTmgZzfTwFiKWayLPPmTdXKgLKvms");
	string str1("HuAVm");

	cout << str << endl;
	//str.append(str1.begin(), str1.begin()+1);

	//str.erase(str.begin(), str.begin()+2);

	//str.insert(str.begin(), str1.begin(), str1.end());

	cout << str << endl;
}

int main(int argv, char **argc){

	//Random();

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

	//string str("abcdef");
	//cout << str[0] << endl;
	//
	//try
	//{
	//	cout << str.at(10) << endl;
	//}
	//catch(out_of_range &a)
	//{
	//	cout << "数组越界" << endl;
	//}
	//string str1 = "呵呵呵";
	//cout << str1 << endl;

	//string str("abcdefg");
	//cout << str << endl;
	//printf("0x%X\n", &(str.c_str()[0]));
	//str[1] = 'a';
	//cout << str << endl;
	//printf("0x%X\n", &(str.c_str()[0]));
	
	//string str("abcdef");
	//string str1(5, 'w');

	//str.insert(2, str1, 1, 2);
	//cout << str << endl;

	//str += str1;
	//cout << str << endl;

	//str.append("嘿嘿");
	//cout << str << endl;

	////重新赋值
	//str = "偶哈哈哈";
	//cout << str << endl;

	//str.erase(2, 2);
	//cout << str << endl;

	//其它函数
	//string str("abcdef");
	//string str1("abc");
	//char arr[10] = ""; 

	//int len = str.copy(arr, 14, 2);
	//cout << arr << " " << len << endl;

	//string str("abcdef");
	//string str1("cd");
	//cout << str.find(str1) << endl;

	//cout << str.substr(2) << endl;

	//str.swap(str1);

	//cout << str << endl;
	//cout << str1 << endl;
	
	//FunIterator();
	TestIterator();


	return 0;
}