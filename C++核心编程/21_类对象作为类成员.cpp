#include <iostream>
#include <string>
using namespace std;

class B {
private :
	string b_Name;
public :
	B(string name){
		b_Name = name;
		cout << "B�Ĺ��캯��" << endl;
	}
	~B() {
		cout << "B����������" << endl;
	}

	string getName() {
		return b_Name;
	}

};

class A {
private:
	string a_Name;
	//�������������Ϊ����ĳ�Ա������ʱ���ȹ�������������ٹ��챾��
	//����˳���෴
	B a_B;

public :
	//B m_Name = pName; //��ʽת����
	A(string name, string bName) : a_Name(name), a_B(bName) {
		cout << "A�Ĺ��캯��" << endl;
	}
	~A() {
		cout << "A����������" << endl;
	}

	string getName() {
		return a_Name;
	}
	B getB() {
		return a_B;
	}
};

void test0021() {
	A a("��˹", "IPhone");
	cout << a.getName() << endl;
	cout << a.getB().getName() << endl;
}

int test21() {

	test0021();

	system("pause");

	return 0;
}