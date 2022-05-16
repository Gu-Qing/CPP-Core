#include <iostream>
using namespace std;

class Person {
public:
	int m_A;
	int m_B;

	//利用成员函数重载左移运算符
	// 通常不会利用成员函数重载<<运算符，因为无法实现cout在左侧
	//void operator<< (cout) {	} //p.operator<< (cout) 简化版本：p << cout
};

//只能利用全局函数重载左移运算符
//如果属性是私有的，就把重载函数改为友元函数
ostream& operator<< (ostream &out, Person &p) {
	out << "m_A = " << p.m_A << ", m_B = " << p.m_B;
	return out;
}

void test0031() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	cout << p1 << endl;
}

int test31() {

	test0031();

	system("pause");

	return 0;
}