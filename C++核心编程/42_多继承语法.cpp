#include <iostream>
using namespace std;

/*
* C++允许一个类继承多个类
* class 子类 : 继承方式 父类1, 继承方式 父类2...
* 多继承可能会引发父类中有同名成员出现，需要加作用域区分
* 实际开发中不建议使用多继承
*/

class B1 {
public :
	int m_A;

	B1() {
		m_A = 100;
	}
};
class B2 {
public:
	int m_A;

	B2() {
		m_A = 200;
	}
};

class S : public B1, public B2 {
public :

	int m_C;
	int m_D;

	S() {
		m_C = 300;
		m_D = 400;
	}
};

void test0042() {
	S s;
	cout << "sizeof(Son) = " << sizeof(s) << endl;

	//当父类中出现同名成员，需要加作用域
	cout << "B1 m_A = " << s.B1::m_A << endl;
	cout << "B2 m_A = " << s.B2::m_A << endl;
}

int test42() {

	test0042();

	system("pause");

	return 0;
}