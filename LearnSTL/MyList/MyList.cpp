#include "MyList.h"

void fun(int i){
	cout << i << " ";
}

//list�Ĺ��캯��
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

struct Node{
	int x, y;

	Node(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
	}

	bool operator==(Node no){
		return x == no.x && y == no.y;
	}
};

//���
void demo2(){
	Node no = {12, 233};
	list<Node> ls(6, no);

	//cout << ls.end()->x << " " << ls.end()->y << endl;
	list<Node>::iterator itls = ls.begin();
	itls++;

	ls.push_front(Node(211, 244));//ͷ���
	ls.push_back(Node(255, 266));//β���
	ls.insert(itls, Node(666, 666));//�м����
	ls.insert(itls, 3, Node(777, 888));

	ls.remove(Node(12, 233));

	//ls.pop_back();//βɾ��
	//ls.pop_front();//ͷɾ��
	//ls.erase(itls);//ɾ��ָ��Ԫ��
	//ls.erase(itls, ls.end());

	for (list<Node>::iterator ite = ls.begin(); ite != ls.end(); ++ite){
		cout << ite->x << " " << ite->y << endl;
	}
	cout << endl;
	ls.clear();

	ls.assign(3, Node(666, 777));//���¸�ֵ
}