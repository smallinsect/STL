#include "MyList.h"

void fun(int i){
	cout << i << " ";
}

//list的构造函数
void demo1(){
	list<int> ls(5);

	for_each(ls.begin(), ls.end(), fun);
	cout << endl;

	list<int> ls1(6, 233);
	for_each(ls1.begin(), ls1.end(), fun);
	cout << endl;

	list<int> ls2(ls);
	for_each(ls2.begin(), ls2.end(), fun);
	cout << endl;

	list<int> ls3(ls2.begin(), ls2.end());
	for_each(ls3.begin(), ls3.end(), fun);
	cout << endl;

	cout << ls3.size() << endl;
	ls3.resize(3);
	cout << ls3.size() << endl;
	for_each(ls3.begin(), ls3.end(), fun);
	cout << endl;

	ls3.empty();
}