
#include "MyMap.h"

void func(pair<int, char> p){
	cout << p.first << " " << p.second << endl;
	
}

void demo1(){
	typedef pair<int, char> in_pair;

	pair<map<int, char>::iterator, bool> pr;

	map<int, char> m;

	//����Ԫ��
	m.insert(pair<int, char>(233, 'e'));
	pr = m.insert(in_pair(211, 'c'));
	cout << pr.second << endl;

	pr = m.insert(in_pair(211, 'a'));
	cout << pr.second << endl;

	//����Ԫ��
	for_each(m.begin(), m.end(), func);

}