
#include "MyVectorFunc.h"

void demo1(){
	vector<int> v;

	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);
	v.push_back(55);

	for (vector<int>::iterator ite = v.begin(); ite != v.end(); ++ite){
		cout << *ite << " ";
	}
	cout << endl;

	vector<int> v1(3);
	for (vector<int>::iterator ite = v1.begin(); ite != v1.end(); ++ite){
		cout << *ite << " ";
	}
	cout << endl;

	vector<int> v2(4, 233);
	for (vector<int>::iterator ite = v2.begin(); ite != v2.end(); ++ite){
		cout << *ite << " ";
	}
	cout << endl;

	vector<int> v3(v2);
	for (vector<int>::iterator ite = v3.begin(); ite != v3.end(); ++ite){
		cout << *ite << " ";
	}
	cout << endl;

	vector<int>::iterator iteb = v.begin();
	vector<int>::iterator itee = v.end();

	vector<int> v4(iteb, itee);
	for (vector<int>::iterator ite = v4.begin(); ite != v4.end(); ++ite){
		cout << *ite << " ";
	}
	cout << endl;

}

//capacity ���� ���������� �����������ͱ������й�
//size ��ЧԪ�صĸ��� resize ������ЧԪ�ظ���
void demo2(){
	vector<int> v;
	cout << v.capacity() << endl;

	vector<int> v1(5);
	cout << v1.capacity() << endl;

	v1.push_back(666666);
	cout << "capacity=" << v1.capacity() << endl;
	cout << "size=" << v1.size() << endl;

	//����������С ����Ĵ�С ������ڵ�ǰ������С
	v1.reserve(20);
	v1.resize(21);

	cout << "capacity=" << v1.capacity() << endl;
	cout << "size=" << v1.size() << endl;

	//�ж������Ƿ�Ϊ�� �շ���true
	v1.empty();

}