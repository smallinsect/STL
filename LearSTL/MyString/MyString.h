
//#pragma once

#ifndef _MYSTRING
#define _MYSTRING

#include <iostream>
using namespace std;

class MyString
{
private:
	char *m_str;
	size_t m_length;
public:
	MyString();
	MyString(size_t length, char ch);
	MyString(const char *str);
	MyString(const char *str, size_t length);
	MyString(MyString &str, size_t index, size_t length);
	MyString(const MyString &str);

	const char *c_str() const;
	const size_t c_size() const;

	void operator = (const char *ss);
public:
	~MyString();
public:
	
	//输出重载
	friend ostream &operator << (ostream &os, MyString &str);
	//输入重载
	friend istream &operator >> (istream &is, MyString &str);
};

//输出重载
//ostream &operator << (ostream &os, MyString &str);
//输入重载
//istream &operator >> (istream &is, MyString &str);

#endif