
#include "MyString.h"


MyString::MyString()
{
	m_str = new char('\0');
	m_length = 0;
}

MyString::MyString(size_t length, char ch)
{
	m_str = new char[length + 1];
	for(size_t i = 0; i < length; ++i)
	{
		m_str[i] = ch;
	}
	m_str[length] = '\0';
	m_length = length;
}

MyString::MyString(const char *str)
{
	size_t length = 0;
	const char *pStr = str;
	while(*pStr != '\0')
	{
		length++;
		pStr++;
	}
	m_str = new char[length + 1];
	for(size_t i = 0; i < length; ++i)
	{
		m_str[i] = str[i];
	}
	m_str[length] = '\0';
	m_length = length;
}

MyString::MyString(const char *str, size_t length)
{
	m_str = new char[length + 1];
	for(size_t i = 0; i < length; ++i)
	{
		m_str[i] = str[i];
	}
	m_str[length] = '\0';
	m_length = length;
}

MyString::MyString(MyString &str, size_t index, size_t length)
{
	m_str = new char[length + 1];
	for(size_t i = 0; i < length; ++i)
	{
		m_str[i] = str.c_str()[index + i - 1];
	}
	m_str[length] = '\0';
	m_length = length;
}

MyString::MyString(const MyString &str)
{
	m_str = new char[str.c_size() + 1];
	for(size_t i = 0; i < str.c_size() + 1; ++i)
	{
		m_str[i] = str.c_str()[i];
	}
}

MyString::~MyString()
{
	if(m_str != NULL)
	{
		delete m_str;
	}
}

const char * MyString::c_str() const
{
	return m_str;
}

const size_t MyString::c_size() const
{
	return m_length;
}

void MyString::operator = (const char *ss)
{
	size_t length = 0;
	while(ss[length] != '\0')
	{
		++length;
	}
	delete[] m_str;
	m_str = new char[length + 1];
	for(size_t i = 0; i < length; ++i)
	{
		m_str[i] = ss[i];
	}
	m_str[length] = '\0';
	m_length = length;
}

//输出重载
ostream &operator << (ostream &os, MyString &str)
{
	//os << str.m_str;
	os << str.c_str();
	return os;
}
//输入重载
istream &operator >> (istream &is, MyString &str)
{
	char ss[20] = "";
	is >> ss;
	str = ss;
	return is;
}


//输出重载
//ostream &operator << (ostream &os, MyString &str)
//{
//	os << str.c_str();
//	return os;
//}
//输入重载
//istream &operator >> (istream &is, MyString &str)
//{
//	char ss[20] = "";
//	is >> ss;
//	str = ss;
//	return is;
//}