
#include "MyDeque.h"

void demo1(){
	deque<int> dq;
	dq.push_back(255); 
	dq.push_back(244);
	dq.push_front(211);

	for (deque<int>::iterator ite = dq.begin(); ite != dq.end(); ++ite){
		cout << *ite << " ";
	}
	cout << endl;

}
