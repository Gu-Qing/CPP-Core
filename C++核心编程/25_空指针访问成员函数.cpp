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
		if (this == NULL) {//�����ԭ���Ǵ����ָ����NULL
			return;
		}
		//ÿ����Ա������Ĭ�ϼ����� this->
		cout << "age = " << this->m_Age << endl;
	}
};

void test0025() {
	Persons* p = NULL;
	p->showClassName(); //���ᱨ��
	//p->showPersonAge(); 
}

int test25() {

	test0025();

	system("pause");

	return 0;
}