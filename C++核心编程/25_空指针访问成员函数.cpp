#include <iostream>
using namespace std;

class Persons {
private :
	int m_Age;

public :
	void showClassName() {
		cout << "this is Person class" << endl;
	}
	void showPersonAge() {
		if (this == NULL) {//报错的原因是传入的指针是NULL
			return;
		}
		//每个成员变量都默认加上了 this->
		cout << "age = " << this->m_Age << endl;
	}
};

void test0025() {
	Persons* p = NULL;
	p->showClassName(); //不会报错
	//p->showPersonAge(); 
}

int test25() {

	test0025();

	system("pause");

	return 0;
}