
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

void fun(int i){
	cout << i << " ";
}

//����vectorԪ��
void demo3(){

	vector<int> v;

	for (int i = 0; i < 10; ++i){
		v.push_back(i);
	}

	//cout << v[10] << endl;

	//cout << v.at(10) << endl;
	cout << v.back() << endl;

	//for (vector<int>::iterator ite = v.begin(); ite != v.end(); ++ite){
	//	cout << *ite << endl;
	//}

	for_each(v.begin(), v.end(), fun);
}

//���Ԫ�� ɾ��Ԫ�� ����Ԫ��
void demo4(){
	vector<int> v;
	for (int i = 0; i < 10; ++i){
		v.push_back(i);
	}

	vector<int> v1(4, 3);

	//v.insert(v.begin()+2, 2333);
	//v.insert(v.begin() + 2, 5, 2333);//����5��2333
	//v.insert(v.begin() + 2, v1.begin(), v1.begin() + 2);

	for_each(v.begin(), v.end(), fun);
	cout << endl;

	//v.pop_back();//ɾ��ĩβԪ��
	//v.erase(v.begin() + 2, v.begin() + 5);


	//v.swap(v1);//����v��v1��Ԫ��

	sort(v.begin() + 2, v.begin() + 8, greater<int>());

	for_each(v.begin(), v.end(), fun);
	cout << endl;

	v.clear();//��������Ԫ��
	//cout << v[1] << endl;
	v.assign(4, 3);//���¸�ֵ

	srand((unsigned int)time(NULL));
	//�����㷨
	random_shuffle(v.begin(), v.end());
}