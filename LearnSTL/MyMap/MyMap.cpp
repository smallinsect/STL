
#include "MyMap.h"

void func(pair<int, char> p){
	cout << p.first << " " << p.second << endl;
	
}

typedef pair<int, char> in_pair;

void demo1(){

	pair<map<int, char>::iterator, bool> pr;

	map<int, char> m;

	//插入元素
	m.insert(pair<int, char>(233, 'e'));
	pr = m.insert(in_pair(211, 'c'));
	cout << pr.second << endl;

	pr = m.insert(in_pair(211, 'a'));
	cout << pr.second << endl;

	//遍历元素
	for_each(m.begin(), m.end(), func);

}

void demo2(){

	map<int, char> m;

	m.insert(in_pair(211, 'a'));
	m.insert(in_pair(222, 'b'));
	m.insert(in_pair(233, 'c'));
	m.insert(in_pair(244, 'd'));
	m.insert(in_pair(255, 'e'));

	map<int, char>::iterator ite = m.begin();

	++ite;
	++ite;
	++ite;
	++ite;

	m.insert(ite, in_pair(1, 'f'));

	map<int, char> m1;

	m1.insert(in_pair(2, 'v'));
	m1.insert(in_pair(44, 't'));
	m1.insert(in_pair(77, 'y'));

	m1.insert(m.begin(), m.end());

	for_each(m1.begin(), m1.end(), func);
}