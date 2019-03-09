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

//输出
void demo2(){
	Node no = {12, 233};
	list<Node> ls(6, no);

	//cout << ls.end()->x << " " << ls.end()->y << endl;
	list<Node>::iterator itls = ls.begin();
	itls++;

	ls.push_front(Node(211, 244));//头添加
	ls.push_back(Node(255, 266));//尾添加
	ls.insert(itls, Node(666, 666));//中间添加
	ls.insert(itls, 3, Node(777, 888));

	ls.remove(Node(12, 233));

	//ls.pop_back();//尾删除
	//ls.pop_front();//头删除
	//ls.erase(itls);//删除指定元素
	//ls.erase(itls, ls.end());

	for (list<Node>::iterator ite = ls.begin(); ite != ls.end(); ++ite){
		cout << ite->x << " " << ite->y << endl;
	}
	cout << endl;
	ls.clear();

	ls.assign(3, Node(666, 777));//重新赋值
}