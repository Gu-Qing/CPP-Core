#include <iostream>
using namespace std;

class Car {
private :
	int m_A;
	int m_B;
	int m_C;

public :
	//Car(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}
	// 
	//使用初始化列表初始化属性
	//Car() : m_A(10), m_B(20), m_C(30) {}
	Car(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}

	int getA() {
		return m_A;
	}
	int getB() {
		return m_B;
	}
	int getC() {
		return m_C;
	}
};

void test0020() {
	//Car c(10, 20, 30);
	//Car c;
	Car c(30, 10, 20);
	cout << "m_A = " << c.getA() << endl;
	cout << "m_B = " << c.getB() << endl;
	cout << "m_C = " << c.getC() << endl;
}

int test20() {

	test0020();

	system("pause");

	return 0;
}